#ifndef GAME_H
#define GAME_H

#include "GameState.h"




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
	void initTetris();
	void initUpdateState();



	//zmienne
	float dt;

	std::stack<State*> states;

	sf::RenderWindow *window;
	sf::Event event;
	sf::Clock dtClock;
};

#endif