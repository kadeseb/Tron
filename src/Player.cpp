#include "../include/Player.h"

Player::Player()
{
	this->position.x = 0;
	this->position.y = 0;
	this->direction = 0;
}

void Player::handleMove(Keyboard::Key const &keyCode, Vector2f const &mapSize)
{
}

Vector2f Player::getPosition()
{
	return this->position;
}

sf::Vector2f Joueur::getPosition()
{
	return sf::Vector2f(this->x, this->y);
}
