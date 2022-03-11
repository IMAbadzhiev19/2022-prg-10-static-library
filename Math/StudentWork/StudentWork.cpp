// StudentWork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../MathLibrary/MathLibrary.h"
using namespace std;

int main()
{
	float a, b, c;
	cout << "Enter the length of each side: ";
	cin >> a >> b >> c;

	cout << "P = " << triangleP(a, b, c) << endl << "S = " << triangleS(a, b, c);
}