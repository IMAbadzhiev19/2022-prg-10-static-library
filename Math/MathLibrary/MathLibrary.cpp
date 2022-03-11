// MathLibrary.cpp : Defines the functions for the static library.
//

#include<iostream>
#include"../MathLibrary/MathLibrary.h"

#include "pch.h"
#include "framework.h"

using namespace std;

float triangleP(float a, float b, float c)
{
	return a + b + c;
}

float triangleS(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}