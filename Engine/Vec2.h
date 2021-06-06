#pragma once

class Vec2
{
	public:
		Vec2() = default; //дефолтный, ничего не делающий конструктор
		Vec2(float x_in, float y_in);

		Vec2 operator+ (const Vec2& second) const; 

		Vec2& operator+= (const Vec2& second);

		Vec2 operator* (const float k) const;
		Vec2& operator*= (const float k);

	private:
		float x;
		float y;

};
