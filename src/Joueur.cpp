#include "../include/Joueur.h"

const int Joueur::HAUT = 0;
const int Joueur::BAS = 1;
const int Joueur::GAUCHE = 2;
const int Joueur::DROITE = 3;


Joueur::Joueur()
{
    this->x = 0;
    this->y = 0;
}

void Joueur::setMaximumPos(sf::Vector2f position)
{
    this->maxLargeur = position.x;
    this->maxHauteur = position.y;
}

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
