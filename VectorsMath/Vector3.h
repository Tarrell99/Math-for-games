#pragma once
#include<iostream>
class Vector3
{
public:
	Vector3();
	float GetX();
	float GetY();
	Vector3 operator + (Vector3 & rhs);
	Vector3 operator - (Vector3 & rhs);
	Vector3 operator * (Vector3 & rhs);
	Vector3 operator == (Vector3 & rhs);
	Vector3 operator != (Vector3 & rhs);
private:
	float xPos;
	float yPos;
};


