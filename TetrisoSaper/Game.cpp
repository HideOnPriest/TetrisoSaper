#include "pch.h"
#include "Game.h"



void Game::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "TetrisoSaper");
}




Game::Game()
{
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}
void Game::updateDT()
{

	this->dt = this->dtClock.restart().asSeconds();

}

void Game::updateEvents()
{

	while (window->pollEvent(this->event))
	{
		if (this->event.type == sf::Event::Closed)
		{
			this->window->close();
		}
	}

}

void Game::update()
{

	this->updateEvents();
}

void Game::render()
{
	this->window->clear();
	this->window->display();
}

void Game::run()
{
	while (this->window->isOpen())
	{
		this->updateDT();
		this->update();
		this->render();
	}

}

