/**
@File Main.cpp
*/

/**
* \mainpage Mouse on a Mission
*/

#include <SFML/Graphics.hpp>

int main() /** Main Proc */
{
	//Window properties
	int iWinWidth = 1024;
	int iWinHeight = 800;

	sf::RenderWindow window(sf::VideoMode(iWinWidth, iWinHeight), "Window Title");

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			//Closing the window
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();
		//Draw things here

		window.display();
	}
	return 0;
}