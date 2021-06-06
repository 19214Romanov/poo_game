#pragma once

class Vec2
{
	public:
		Vec2() = default; //���������, ������ �� �������� �����������
		Vec2(float x_in, float y_in);

		Vec2 operator+ (const Vec2& second) const; 

		Vec2& operator+= (const Vec2& second);

		Vec2 operator* (const float k) const;
		Vec2& operator*= (const float k);

	public:
		float x;
		float y;

};
