#include <iostream>
#include <SFML/Graphics.hpp>
#include "include/Map.h"
#include "include/Joueur.h"
using namespace std;

#define LARGEUR 800
#define HAUTEUR 600

int main()
{
    Map map(LARGEUR, HAUTEUR);
    Joueur joueur;
    sf::Vector2f jpos;

    // Create the main window
    sf::RenderWindow app(sf::VideoMode(LARGEUR, HAUTEUR), "SFML window");

    //map.init(0);
    //map.afficher();
    joueur.setMaximumPos(map.getTaille());

	// Start the game loop
    while (app.isOpen())
    {
        jpos = joueur.getPosition();

        // Process events
        sf::Event event;
        while (app.pollEvent(event))
        {
            switch (event.type) {
                case sf::Event::Closed:
                    app.close();
                    break;

                case sf::Event::KeyPressed:
                    switch (event.key.code) {
                        case sf::Keyboard::Up:
                            cout << "HAUT" << endl;
                            joueur.deplacer(Joueur::HAUT);
                            break;

                        case sf::Keyboard::Down:
                            joueur.deplacer(Joueur::BAS);
                            cout << "BAS" << endl;
                            break;

                        case sf::Keyboard::Left:
                            joueur.deplacer(Joueur::GAUCHE);
                            cout << "GAUCHE" << endl;
                            break;

                        case sf::Keyboard::Right:
                            joueur.deplacer(Joueur::DROITE);
                            cout << "DROITE" << endl;
                            break;
                    }

                    cout << joueur.getPosition().x << " " << joueur.getPosition().y << endl;
                    break;
            }

            //map.setValue(joueur.getPosition(), 1);
        }

        // Clear screen
        app.clear();

        // Draw the sprite
        //app.draw(sprite);
        map.afficher(app);

        // Update the window
        app.display();
    }

    return EXIT_SUCCESS;
}
