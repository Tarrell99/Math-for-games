#include<iostream>
#include "Vectors2.h"
#include "Vector3.h"

int main()
{
	Vector2 V1(1,2);
	Vector2 V2(3,4);
	Vector2 V3 = V1 + V2;
	Vector2 V4 = V1 - V2;
	float bob = 3;
	Vector2 V5 = V2 * bob;
	Vector2 V6(1,2);

	V1 == V2;
	V1 != V2;
	
	V1 == V6;
	V1 != V6;
}