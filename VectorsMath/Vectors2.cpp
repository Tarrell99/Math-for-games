#include "Vectors2.h"
#include <cmath>
Vector2::Vector2()
{
}

float Vector2::GetX()
{
	return xPos;
}

float Vector2::GetY()
{
	return yPos;
}

Vector2 Vector2::operator+(Vector2 & rhs)
{
	// have the two sides add each other EX: <1,2> + <2,1> = <3,3> 
	rhs.GetX + rhs.xPos && rhs.GetY + rhs.yPos = rhs;
	return rhs;
}

Vector2 Vector2::operator-(Vector2 & rhs)
{

	rhs.GetX - rhs.xPos && rhs.GetY - rhs.yPos = rhs;
	return rhs;
}

Vector2 Vector2::operator*(Vector2 & rhs)
{
	rhs.xPos && rhs.yPos * rhs = rhs;
	return rhs;
}

Vector2 Vector2::operator==(Vector2 & rhs)
{
	return rhs;
}

Vector2 Vector2::operator!=(Vector2 & rhs)
{

	return rhs;
}

float Vector2::Magnitude()
{
	return 0.0f;
}

Vector2 Vector2::Normalise()
{
	return Vector2();
}
