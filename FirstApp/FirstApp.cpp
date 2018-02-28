// FirstApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int get_third_side_of_triangle();

int main()
{
	return get_third_side_of_triangle();
}

int get_third_side_of_triangle()
{
	double a;
	cout << "First side: ";
	cin >> a;

	double b;
	cout << "Second side: ";
	cin >> b;

	const auto c = (a > b) ? sqrt(pow(a, 2) - pow(b, 2)) : sqrt(pow(a, 2) + pow(b, 2));
	cout << "Len of c is: " << c << endl;

	cin >> a;
	return 0;
}