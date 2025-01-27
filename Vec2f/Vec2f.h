#pragma once


template<typename T>
class Vec2f {

public:
	T x, y;

	Vec2f(T Ex, T Ey) { x = Ex, y = Ey; };
	~Vec2() {};

	bool operator==(Vec2f compared);
	bool operator!=(Vec2f compared);


	Vec2f<t> operator+(Vec2f<t> toAdd);
	Vec2f<t> operator-(Vec2f<t> toAdd);
	Vec2f<t> operator*(Vec2f<t> toAdd);
	Vec2f<t> operator/(Vec2f<t> toAdd);

	void	normalize();
	float	length();

//implementa gli operator ovverload 

};

