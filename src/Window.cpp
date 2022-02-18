#include "include/core/Window.hpp"


Window::Window(sf::RenderWindow& canvas, sf::Event& ev, sf::Color color) {
    this->canvas = &canvas;
    this->event = &ev;
    this->isRunning = false;
    this->color = color;
}


void Window::pollEvents(Player& player) {
    this->isRunning = true;

    while (this->isRunning) {
        while (this->canvas->pollEvent(*this->event)) {
            switch (this->event->type) {
                case sf::Event::Closed:
                    this->isRunning = false;
                    this->canvas->close();
                    break;
            }
        }

        this->canvas->clear(this->color);
        this->canvas->draw(player.getBody());

        sf::Vector2i mpos = sf::Mouse::getPosition();
        double angle = atan2(mpos.y - player.getPosition().y, mpos.x - player.getPosition().x);
        double dx = cos(angle) * 5;
        double dy = sin(angle) * 5;

        double tx = player.getPosition().x + dx;
        double ty = player.getPosition().y + dy;

        double distance = hypot(mpos.x - player.getPosition().x, mpos.y - player.getPosition().y);
        
        if (distance > player.getPosition().x + 10 / player.getPosition().y + 10) {
            player.move(tx, ty);
        }

        this->canvas->display();
    }
}
