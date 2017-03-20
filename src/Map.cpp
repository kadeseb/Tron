#include "../include/Map.h"

Map::Map(unsigned int screenWidth, unsigned int screenHeight, unsigned int caseSize)
{
	this->width = screenWidth / caseSize + 1;
	this->height = screenWidth / caseSize+ 1;
	this->caseSize = caseSize;

	this->env = new unsigned int*[this->height];

	for (unsigned int y = 0 ; y < this->height ; y++) {
		this->env[y] = new unsigned int[this->width];
	}

	this->initialise();
}

Map::~Map()
{
	for (unsigned int y = 0 ; y < this->height ; y++) {
		delete this->env[y];
	}

	delete this->env;
}

void Map::initialise()
{
	unsigned int alt = 0;

	for (unsigned int y = 0 ; y < this->height ; y++ ) {
		for (unsigned int x = 0 ; x < this->width; x++ ) {
			this->env[y][x] = alt;
			alt = ++alt < 3 ? alt : 0;
		}
	}
}

void Map::display(sf::RenderWindow &app)
{
	Color red(255, 0, 0), green(0, 255, 0), blue(0, 0, 255), clr;
	RectangleShape rect(Vector2f(10, 10));

	rect.setOutlineThickness(1);
	rect.setOutlineColor(Color(0, 0, 0));

	for (unsigned int y = 0 ; y < this->height ; y++) {
		for (unsigned int x = 0 ; x < this->width ; x++) {
			switch (this->env[y][x]) {
				case 0:
				clr = red;
				break;

				case 1:
				clr = green;
				break;

				case 2:
				clr = blue;
				break;
			}

			rect.setFillColor(clr);
			rect.setPosition(x * this->caseSize, y * this->caseSize);
			app.draw(rect);
		}
	}
}

void Map::refresh()
{
	Vector2f position;

	/*for (unsigned int i = 0 ; i < this->players.size() ; i++) {
		position = this->players[i]->getPosition();
		this->env[(int)position.y][(int)position.x] = i;
	}*/
}

void Map::addPlayer(Player &player)
{
	this->players.push_back(&player);
}

Vector2f Map::getSize()
{
	return Vector2f(this->width, this->height);
}
