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
		Vec2 operator- (const Vec2& second) const;
		Vec2& operator-= (const Vec2& second);
		float GetLength() const;
		float GetLengthSq() const;
		Vec2& Normalize();
		Vec2 GetNormalized() const;

	public:
		float x;
		float y;

};
