#ifndef MAINMEUNSTATE_H
#define MAINMEMUSTATE_H
#include "pch.h"
#include "GameState.h"
#include "Button.h"

class MainMenuState :
	public State
{
public:
	MainMenuState(sf::RenderWindow* window);
	virtual ~MainMenuState();

	//funkcje

	void endState();

	void fontLoad();
	void updateKeyBinds(const float& dt);
	void render(sf::RenderTarget* target= NULL);
	void update(const float& dt);

private:
	sf::RectangleShape background;
	sf::Font font;
};
#endif

