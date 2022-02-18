#include <SFML/Graphics.hpp>
#include "include/core/Window.hpp"
#include "include/entity/Player.hpp"


int main() {
    sf::RenderWindow window(sf::VideoMode(640, 480), "Physics!", sf::Style::Default);
    sf::Event event;
    Window win(window, event, sf::Color::Blue);
    Player player;
    player.move(640 / 2, 480 / 2);

    win.pollEvents(player);

    return 0;
}
