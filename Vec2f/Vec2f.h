#pragma once

class Vec2f {

public:
	float x;
	float y;

	Vec2f(float Ex, float Ey) { x = Ex, y = Ey; };

	float& operator[](int i);
	const float& operator[](int i) const;
};