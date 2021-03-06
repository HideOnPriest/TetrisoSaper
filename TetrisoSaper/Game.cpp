
#include "pch.h"
#include "Game.h"

void Game::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "TetrisoSaper");
	
}


void Game::initUpdateState()
{
	this->states.push(new MainMenuState(this->window));
	
}

Game::Game()
{
	this->initWindow();
	this->initUpdateState();
}

Game::~Game()
{
	delete this->window;

	while (!this->states.empty())
	{
		delete this->states.top();
		this->states.pop();
	}

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

	if (!this->states.empty())
	{
		this->states.top()->update(this->dt);
		if (this->states.top()->getQuit())
		{
			this->states.top()->endState();
			delete this->states.top();
			this->states.pop();
		}
	}
	else
	{
		this->endApplication();
		this->window->close();
	}
}

void Game::render()
{
	this->window->clear();
	//render
	if (!this->states.empty())
	{
		this->states.top()->render();
	}
	
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

void Game::endApplication()
{
	std::cout << "Ending Application " << std::endl;
}

