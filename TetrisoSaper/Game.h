#ifndef GAME_H
#define GAME_H

#include "MainMenuState.h"




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
	void endApplication();
	

private:

	//init

	void initWindow();
	void initUpdateState();



	//zmienne
	float dt;

	std::stack<State*> states;

	sf::RenderWindow *window;
	sf::Event event;
	sf::Clock dtClock;
};

#endif