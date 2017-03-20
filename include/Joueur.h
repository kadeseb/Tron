#ifndef JOUEUR_H
#define JOUEUR_H

#include <SFML/Graphics.hpp>
using namespace std;

class Joueur
{
    public:
        static const int HAUT;
        static const int BAS;
        static const int GAUCHE;
        static const int DROITE;

        Joueur();
        void deplacer(unsigned int sens);
        void setMaximumPos(sf::Vector2f position);
        sf::Vector2f getPosition();

    protected:
        unsigned int x, y;
        unsigned int maxLargeur;
        unsigned int maxHauteur;
        unsigned int direction;

    private:
};

#endif // JOUEUR_H
