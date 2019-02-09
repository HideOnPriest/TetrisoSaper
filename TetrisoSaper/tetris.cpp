#include "pch.h"
#include "State.h"




Tetris::Tetris(sf::RenderWindow *window)
{
	
	this->block.loadFromFile("Files/smallertetri.png");
	this->sprite.setTexture(block);
	
}


Tetris::~Tetris()
{
}

void Tetris::render()
{
	
}


