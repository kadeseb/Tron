#include <iostream>
#include <SFML/Graphics.hpp>
#include "../include/Map.h"
//#include "../include/Player.h"
using namespace std;
using namespace sf;

#define WIDTH 800
#define HEIGHT 600
#define CASEWIDTH 10

int main()
{
	RenderWindow app(VideoMode(WIDTH, HEIGHT), "Tron");
	Map map(WIDTH, HEIGHT, CASEWIDTH);

	while (app.isOpen())
	{
		Event event;

		while (app.pollEvent(event))
		{
			switch (event.type) {
				case Event::Closed:
				app.close();
				break;

				case Event::KeyPressed:
				break;
			}
		}

		/********
		* Clean *
		*********/
		app.clear();

		/*******
		* Draw *
		********/
		map.display(app);

		/*********
		* Update *
		*********/
		app.display();
	}

	return EXIT_SUCCESS;
}
