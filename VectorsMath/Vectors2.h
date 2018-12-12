#pragma once
#include<iostream>

class Vector2
{
public:
	Vector2();
	Vector2(float x, float y);
	float GetX();
	float GetY();
	Vector2 operator + (Vector2& rhs );
	Vector2 operator - (Vector2& rhs);
	Vector2 operator * (float& rhs);
	bool operator == (Vector2& rhs);
	bool operator != (Vector2& rhs);
	float Magnitude();
	Vector2 Normalise();
	float distance(Vector2 other);
private:
	float xPos;
	float yPos;
};

