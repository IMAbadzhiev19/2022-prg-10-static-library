// MathLibrary.cpp : Defines the functions for the static library.
//
#include<iostream>

#include "pch.h"
#include"../MathLibrary/MathLibrary.h"

float triangleP(float a, float b, float c)
{
	return a + b + c;
}

float triangleS(float a, float b, float c)
{
	float p = a + b + c;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}