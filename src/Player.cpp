#include "include/entity/Player.hpp"


Player::Player() {
    this->body = sf::CircleShape(80, 3);
    this->body.setFillColor(sf::Color::Green);
}

void Player::move(short x, short y) {
    this->body.setPosition(x, y);
}

sf::Vector2f Player::getPosition() {
    return this->body.getPosition();
}

const sf::CircleShape& Player::getBody() {
    return this->body;
}
