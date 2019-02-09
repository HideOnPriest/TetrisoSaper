#ifndef Button
#define BUTTON
#include "SFML/Graphics.hpp"
#include <iostream>




using namespace std;
using namespace sf;

enum button_states
{
	BTN_IDLE = 0,
	BTN_HOVER,
	BTN_ACTIVE
};


class Button
{
public:
	Button(float x, float y, float width, float height, String text, Color idleColor, Color hoverColor, Color activColor);
	~Button();
	

	const bool isPressed() const;

	//Funkcje
	void update(const Vector2f mausePos);
	void render(RenderTarget* target);
	
private:
	short unsigned buttonStates;


	RectangleShape shape;
	Text text;
	Font* font;

	Color idleColor;
	Color howerColor;
	Color activeColor;
};
#endif



