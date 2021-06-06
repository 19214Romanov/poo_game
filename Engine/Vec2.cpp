#include "Vec2.h"
#include <cmath>

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

Vec2 Vec2::operator-(const Vec2& second) const
{
	return Vec2(this->x - second.x, this->y - second.y);
}

Vec2& Vec2::operator-=(const Vec2& second)
{
	return *this = *this - second;
}

float Vec2::GetLength() const
{
	return std::sqrt(GetLengthSq());
}

float Vec2::GetLengthSq() const
{
	return x*x + y*y;
}

Vec2& Vec2::Normalize()
{
	return *this = GetNormalized();
}

Vec2 Vec2::GetNormalized() const
{
	const float len = GetLength();
	if(len != 0.0f)
	{
		return *this * (1.0f / len);
	}
	return *this;
}
