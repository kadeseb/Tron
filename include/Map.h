#ifndef MAP_H
#define MAP_H
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
using namespace std;

class Map
{
    public:
        Map(unsigned int largeur, unsigned int hauteur);
        void afficher(sf::RenderWindow &app);
        int getValue(sf::Vector2f position);
        bool setValue(sf::Vector2f position, int value);
        sf::Vector2f getTaille();

    protected:
        vector <int> bloc;
        unsigned int largeur;
        unsigned int hauteur;
        unsigned int taille_case;
        sf::Vector2f position_vue;

    private:
};

#endif // MAP_H
