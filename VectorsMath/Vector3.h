#pragma once
#include<iostream>
class Vector3
{
public:
	Vector3();
	Vector3(float x, float y, float z);
	float GetX();
	float GetY();
	float GetZ();
	Vector3 operator + (Vector3& rhs);
	Vector3 operator - (Vector3& rhs);
	Vector3 operator * (float& rhs);
	bool operator == (Vector3& rhs);
	bool operator != (Vector3& rhs);
	float Magnitude();
	Vector3 Normalise();
	float distance(Vector3 other);
private:
	float xPos;
	float yPos;
	float zPos;
};


