#include "pch.h"
#include "MainMenuState.h"


MainMenuState::MainMenuState(sf::RenderWindow* window)
	: State(window)
{
	this->background.setSize(sf::Vector2f(window->getSize().x, window->getSize().y));
	this->background.setFillColor(sf::Color::Green);
	this->fontLoad();
}


MainMenuState::~MainMenuState()
{
}



void MainMenuState::endState()
{
	std::cout << "ENDING GAME" << std::endl;
}

void MainMenuState::fontLoad()
{
	if (!this->font.loadFromFile("Font/arial.ttf"))
	{
		throw("ERROR::MAIANMENUSTATE::COULD NOT FONT");
	}
}

void MainMenuState::updateKeyBinds(const float& dt)
{
	this->checkForQuit();
}

void MainMenuState::update(const float& dt)
{
	this->updateMousePos();
	this->updateKeyBinds(dt);


}

void MainMenuState::render(sf::RenderTarget* target)
{
	if (!target)
		target = this->window;
	target->draw(this->background);
}


