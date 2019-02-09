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
}

void GameState::render(sf::RenderTarget* target)
{
}

void GameState::update(const float& dt)
{
	std::cout << "HELLO IN GAME" << std::endl;
}
