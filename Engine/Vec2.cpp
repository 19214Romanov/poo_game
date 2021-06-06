#include "Vec2.h"

Vec2::Vec2(float x_in, float y_in)
{
	this->x = x_in;
	this->y = y_in;
}

Vec2 Vec2::operator+(const Vec2& second) const
{
	return Vec2(this->x + second.x, this->y + second.y);
}

Vec2& Vec2::operator+=(const Vec2& second)
{
	return *this = *this + second;
}

Vec2 Vec2::operator*(const float k) const
{
	return Vec2(this->x * k, this->y * k);
}

Vec2& Vec2::operator*=(const float k)
{
	return *this = *this * k;
}
