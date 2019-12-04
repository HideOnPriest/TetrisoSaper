#include "pch.h"
#include "Entity.h"



Entity::Entity()
{
	this->shape.setSize(sf::Vector2f(50.f, 50.f));
	this->shape.setFillColor(sf::Color::White);
	this->movementSpeed = 100.f;
}


Entity::~Entity()
{
}

void Entity::move(const float& dt, float dir_x, float dir_y)
{
	this->shape.move(dir_x * this->movementSpeed * dt, dir_y * this->movementSpeed * dt);

}

void Entity::update(const float & dt)
{
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		this->move(dt, 1.f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		this->move(dt, -1.f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		this->movementSpeed = 400.f;
	else
		this->movementSpeed = 100.f;
	this->move(dt, 0.f, 0.5f);

}

void Entity::render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}


