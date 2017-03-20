#include "../include/Map.h"

Map::Map(unsigned int largeur, unsigned int hauteur)
{
    this->taille_case = 10;
    this->largeur = largeur / this->taille_case + 1;
    this->hauteur = hauteur / this->taille_case + 1;

    for (unsigned int y = 0 ; y < this->hauteur ; y++ ) {
        for (unsigned int x = 0 ; x < this->largeur ; x++ ) {
            this->bloc.push_back(0);
            cout << this->getValue(sf::Vector2f(x, y));
        }
        cout << endl;
    }
}

void Map::afficher(sf::RenderWindow &app)
{
    sf::Color blanc(255, 255, 255), bleu(0, 0, 255), vert(0, 255, 0), clr;
    sf::RectangleShape rectangle(sf::Vector2f(10, 10));

    rectangle.setOutlineThickness(1);
    rectangle.setOutlineColor(sf::Color(0, 0, 0));

    for (unsigned int y = 0 ; y < this->hauteur ; y++) {
        for (unsigned int x = 0 ; x < this->largeur ; x++) {
            switch (this->getValue(sf::Vector2f(x, y))) {
                case 0:
                    clr = blanc;
                    break;

                case 1:
                    clr = bleu;
                    break;

                case 2:
                    clr = vert;
                    break;
            }

            rectangle.setFillColor(clr);
            rectangle.setPosition(x * 10, y * 10);
            app.draw(rectangle);
        }
    }
}

int Map::getValue(sf::Vector2f position)
{
    return this->bloc[position.x + position.y * this->largeur];
}

bool Map::setValue(sf::Vector2f position, int value)
{
    if (position.y < this->hauteur || position.x < this->largeur) {
        this->bloc[position.x + position.y * this->largeur] = value;
        return true;
    } else {
        return false;
    }
}

sf::Vector2f Map::getTaille()
{
    return sf::Vector2f(this->largeur, this->hauteur);
}
