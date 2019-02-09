#ifndef GAME_H
#define GAME_H


#include "GameState.h"


using namespace std;
using namespace sf;

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

	//inicjacje
	void initWindow();
	void initStates();


	//zmienne
	float dt;


	RenderWindow *window;
	Event event;
	Clock dtClock;
	stack<State*> states;

};
#endif