#include "Vector3.h"

Vector3::Vector3()
{

}

Vector3::Vector3(float x, float y, float z)
{
	xPos = x;
	yPos = y;
	zPos = z;
}

float Vector3::GetX()
{
	return xPos;
}

float Vector3::GetY()
{
	return yPos;
}

float Vector3::GetZ()
{
	return zPos;
}

Vector3 Vector3::operator+(Vector3 & rhs)
{
	return Vector3(xPos + rhs.xPos, yPos + rhs.yPos, zPos + rhs.zPos);
}

Vector3 Vector3::operator-(Vector3 & rhs)
{
	return Vector3(xPos - rhs.xPos, yPos - rhs.yPos, zPos - rhs.zPos);
}

Vector3 Vector3::operator*(float & rhs)
{
	return Vector3(xPos * rhs, yPos * rhs, zPos * rhs);
}

bool Vector3::operator==(Vector3 & rhs)
{
	if (this->xPos == rhs.xPos && this->yPos == rhs.yPos && this->zPos == rhs.zPos)
	{
		return true;
	}
	return false;
}

bool Vector3::operator!=(Vector3 & rhs)
{
	if (this->xPos != rhs.xPos || this->yPos != rhs.yPos || this->zPos != rhs.zPos)
	{
		return true;
	}
	return false;
}

float Vector3::Magnitude()
{                 // xPos * xPos
	return sqrtf(pow(xPos, 2) + pow(yPos, 2) + pow(zPos, 2));
}

Vector3 Vector3::Normalise()
{
	return Vector3((xPos / Magnitude()), (yPos / Magnitude()), (zPos / Magnitude()));
}

float Vector3::distance(Vector3 other)
{
	return sqrtf(pow(other.xPos - xPos, 2) + pow(other.yPos - yPos, 2) + pow(other.zPos - zPos, 2));
}
