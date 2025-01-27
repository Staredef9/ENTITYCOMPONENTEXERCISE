#pragma once
#include "../Vec2f/Vec2f.h"
#include "../SFML/Graphics.hpp"

class CTransform {
public:
	Vec2f pos;
	Vec2f velocity;
	Vec2f scale;
	float angle;
};

class CCollision {
public:
	float radius;
};

class CScore {
public:
	int score;
};

class CShape {
public:
	sf::CircleShape circle;
};

class CLifespan {
public:
	int lifespan;
	int remaining;
};

class CInput {
public:
	int up;
	int down;
	int left;
	int right;
	int shoot;
};
