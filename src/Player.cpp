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

/*
void Joueur::deplacer(unsigned int sens)
{
    switch (sens) {
        case Joueur::HAUT:
            if (this->y > 0) {
                this->y--;
            }
            break;

        case Joueur::BAS:
            if ((this->y + 1) < this->maxHauteur) {
                this->y++;
            }
            break;

        case Joueur::GAUCHE:
            if (this->x > 0) {
                this->x--;
            }
            break;

        case Joueur::DROITE:
            if ((this->x + 1) < this->maxLargeur) {
                this->x++;
            }
            break;
    }
}

sf::Vector2f Joueur::getPosition()
{
    return sf::Vector2f(this->x, this->y);
}
*/
