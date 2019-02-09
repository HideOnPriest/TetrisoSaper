#include "pch.h"
#include "GameState.h"


GameState::GameState(sf::RenderWindow* window)
	: State(window)
{
}


GameState::~GameState()
{
}



void GameState::endState()
{
	std::cout << "ENDING GAME" << std::endl;
}

void GameState::updateKeyBinds(const float& dt)
{
	this->checkForQuit();
}

void GameState::update(const float& dt)
{
	this->updateMousePos();
	this->updateKeyBinds(dt);
	this->A.update(dt);
}

void GameState::render(sf::RenderTarget* target)
{
	this->A.render(this->window);
}


