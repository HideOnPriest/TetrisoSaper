#ifndef STATE_H
#define STATE_H



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

class State
{
private:

	sf::RenderWindow* window;
	std::vector<sf::Texture> textures;
	bool quit;

public:
	State(sf::RenderWindow* window);
	virtual ~State();

	const bool& getQuit()const;
	virtual void checkForQuit();


	virtual void endState()=0;
	virtual void updateKeyBinds(const float& dt)=0;
	virtual void update(const float& dt) = 0;
	virtual void render(sf::RenderTarget* target = nullptr) = 0;
};
#endif
