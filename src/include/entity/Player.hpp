#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Graphics.hpp>


class Player {
    private:
        sf::CircleShape body;

    public:
        Player();
        void move(short x, short y);
        const sf::CircleShape& getBody();
        sf::Vector2f getPosition();
};


#endif
