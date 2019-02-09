#include "pch.h"
#include "Button.h"
#include "SFML/Graphics.hpp"
#include <iostream>




Button::Button(float x, float y, float width, float height, String text, Color ideColor, Color hoverColor, Color activeColor)
{
	
	this->buttonStates = BTN_IDLE;

	this->shape.setPosition(Vector2f(x, y));
	this->shape.setSize(Vector2f(width, height));


	this->font = font;
	this->text.setFont(*this->font);
	this->text.setString(text);
	this->text.setFillColor(Color::White);
	this->text.setCharacterSize(12);
	this->text.setPosition(
		this->shape.getPosition().x / 2.f - this->text.getGlobalBounds().width,
		this->shape.getPosition().y / 2.f - this->text.getGlobalBounds().height
	);




	this->idleColor = ideColor;
	this->howerColor = hoverColor;
	this->activeColor = activeColor;


	this->shape.setFillColor(this->idleColor);

}

Button::~Button()
{
}

const bool Button::isPressed() const
{
	if (this->buttonStates == BTN_ACTIVE)
		return true;

	return false;
}

void Button::update(const Vector2f mousePos)
{

	//Oczekiwanie zmaiane statusu
	this->buttonStates = BTN_IDLE;

	//najechanie
	if (this->shape.getGlobalBounds().contains(mousePos))
	{
		
		this->buttonStates = BTN_HOVER;
		
		//wciœniêcie
		if (Mouse::isButtonPressed(Mouse::Left))
		{
			this->buttonStates = BTN_ACTIVE;
		}
	}


	switch (this->buttonStates)
	{
	case BTN_IDLE:
		this->shape.setFillColor(this->idleColor);
			break;
	case BTN_HOVER:
		this->shape.setFillColor(this->howerColor);
			break;
	case BTN_ACTIVE:
		this->shape.setFillColor(this->activeColor);
			break;


	default:
		this->shape.setFillColor(Color::Red);
		break;
	}

}

void Button::render(RenderTarget * target)
{
	target->draw(this->shape);
	target->draw(this->text);
}


