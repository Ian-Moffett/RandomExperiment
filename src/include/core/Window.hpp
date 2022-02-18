#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>
#include "../entity/Player.hpp"


class Window {
    private:
        sf::RenderWindow* canvas;
        sf::Event* event;
        bool isRunning;
        sf::Color color;

    public:
        Window(sf::RenderWindow& canvas, sf::Event& ev, sf::Color color);
        bool running();
        void pollEvents(Player& player);
        void quit();
};


#endif
