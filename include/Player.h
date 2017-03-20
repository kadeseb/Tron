#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

class Player
{
    public:
        Player();
        void handleMove(Keyboard::Key const &keyCode, Vector2f const &mapSize);
        sf::Vector2f getPosition();

    protected:
        Vector2f position;
        unsigned int direction;

    private:
};

#endif // PLAYER_H
