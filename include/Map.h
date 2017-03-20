#ifndef MAP_H
#define MAP_H
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include "Player.h"
using namespace std;
using namespace sf;

class Map
{
    public:
		/*
 		* Instancie l'objet
 		*
 		* -?-
 		* screenWidth:   Largeur de l'écran
 		* screenHeight:  Hauteur de l'écran
 		* caseSize:      Taille d'une case
 		*/
		Map(unsigned int screenWidth, unsigned int screenHeight, unsigned int caseSize);

		/*
		 * Destructeur
		 */
		 ~Map();

		/*
 	 	* Initialise l'environnement à 0
 		*/
		void initialise();

		/*
 		* Affiche la carte
 		*
 		* -?-
 		* app: Fênetre d'affichage
 		*/
		void display(RenderWindow &app);

		/*
 		* Actualise la position des joueurs sur la carte
 		*/
		void refresh();

		/* Ajoute une joueur sur la carte
 		*
 		* -?-
 		* player:  Joueur
 		*/
		void addPlayer(Player &player);

		/*
 		* Retourne la taille de la carte
 		*/
		Vector2f getSize();

    protected:
			unsigned int **env;
			unsigned int width, height;
			unsigned int caseSize;
			vector<Player*> players;
};

#endif // MAP_H
