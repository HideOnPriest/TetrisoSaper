#ifndef GAME_H
#define GAME_H

#include "pch.h"

#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stack>
#include <sstream>
#include <fstream>
#include <map>


#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"
#include "SFML/System.hpp"




class Game
{
public:

	//konstruktory/destruktory
	Game();
	virtual ~Game();

	//funkcje
	void updateDT();
	void updateEvents();
	void update();
	void render();
	void run();
	

private:

	//init

	void initWindow();



	//zmienne
	float dt;

	sf::RenderWindow *window;
	sf::Event event;
	sf::Clock dtClock;
};

#endif