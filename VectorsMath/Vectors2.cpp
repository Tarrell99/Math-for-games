#include "Vectors2.h"
#include <cmath>
Vector2::Vector2()
{
}

Vector2::Vector2(float x, float y)
{
	xPos = x;
	yPos = y;
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
	return Vector2(xPos + rhs.xPos, yPos + rhs.yPos);
}

Vector2 Vector2::operator-(Vector2 & rhs)
{
	return  Vector2(xPos - rhs.xPos, yPos - rhs.yPos);
}

Vector2 Vector2::operator*(float & rhs)
{
	return Vector2(xPos * rhs, yPos * rhs);
}

bool Vector2::operator==(Vector2 & rhs)
{
	if (this->xPos == rhs.xPos && this->yPos == rhs.yPos)
	{
		return true;
	}
	return false;
}

bool Vector2::operator!=(Vector2 & rhs)
{
	if (this->xPos != rhs.xPos || this->yPos != rhs.yPos)
	{
		return true;
	}
	return false;
}

float Vector2::Magnitude()
{
	return sqrtf(pow(xPos, 2) + pow(yPos, 2));
}

Vector2 Vector2::Normalise()
{
	return Vector2((xPos / Magnitude()), (yPos / Magnitude()));
}

float Vector2::distance(Vector2 other)
{
	return sqrtf(pow(other.xPos - xPos, 2) + pow(other.yPos - yPos, 2));
}

//float Vector2::DotPos(Vector2 other)
//{
//	return Vector2((xPos + other.xPos) + (yPos + other.yPos));
//}

