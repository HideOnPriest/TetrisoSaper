#ifndef GAMESTATE_H
#define GAMESTATE_H
#include "pch.h"
#include "State.h"

class GameState :
	public State
{
public:
	GameState(sf::RenderWindow* window);
	virtual ~GameState();

	//funkcje

	void endState();

	void updateKeyBinds(const float& dt);
	void render(sf::RenderTarget* target= nullptr);
	void update(const float& dt);

};
#endif



