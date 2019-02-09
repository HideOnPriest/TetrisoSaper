#ifndef Tetris_H
#define Tetris_H

#include "pch.h"
#include "State.h"

class Tetris
{
public:

	Tetris(sf::RenderWindow *window);
	virtual ~Tetris();
	

	void render();
	


private:

	sf::Texture block;
	sf::Sprite sprite;
	



};
#endif
