#pragma once
#include<iostream>

class Vector2
{
public:
	Vector2();
	float GetX();
	float GetY();
	Vector2 operator + (Vector2& rhs );
	Vector2 operator - (Vector2& rhs);
	Vector2 operator * (Vector2& rhs);
	Vector2 operator == (Vector2& rhs);
	Vector2 operator != (Vector2& rhs);
private:
	float xPos;
	float yPos;
};

