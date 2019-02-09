#ifndef ENTITY_H
#define ENTITY_H

#include "pch.h"

#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stack>
#include <sstream>
#include <fstream>
#include <map>



#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"
#include "SFML/System.hpp"


class Entity
{
public:
	Entity();
	virtual ~Entity();

	//funkcje
	virtual void move(const float& dt, float dir_x, float dir_y);
	virtual void update(const float& dt);
	virtual void render(sf::RenderTarget* target);


protected:
	
	sf::RectangleShape shape;
	float movementSpeed;

private:

};
#endif
