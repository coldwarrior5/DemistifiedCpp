﻿#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int get_third_side_of_triangle();
int to_uppercase();
int uppercase_new_sentence();
int cin_vs_getline();

int main()
{
	cout << "Hipotenuse and leg calculator." << endl << endl << "To calculate hipotenuse enter first number that is smaller of two, consequently enter first number that is bigger to calculate leg." << endl << endl;
	get_third_side_of_triangle();

	cout << endl << "Converting sentence to uppercase version." << endl << endl;
	to_uppercase();

	cout << endl << "Converting first letter of the sentence to uppercase letter." << endl << endl;
	uppercase_new_sentence();

	cout << endl << "Difference between cin and getline." << endl << endl;
	cin_vs_getline();

	system("PAUSE");
	return 0;
}

int get_third_side_of_triangle()
{
	double a;
	cout << "First side: ";
	cin >> a;

	double b;
	cout << "Second side: ";
	cin >> b;

	const auto c = a > b ? sqrt(pow(a, 2) - pow(b, 2)) : sqrt(pow(a, 2) + pow(b, 2));
	cout << "Length of c is: " << c << endl;
	return 0;
}

int to_uppercase()
{
	cout << "Write down some text" << endl;
	string text;
	cin >> ws;												// needed so that getline doesn't gobble up \n from previous cin >> a;
	getline(cin, text);

	for (char letter : text)								// iterate through string
	{
		const char uppercase = toupper(letter);
		cout << uppercase;
	}
	cout << endl;
	return 0;
}

int uppercase_new_sentence()
{
	cout << "Write down some text" << endl;
	string text;
	cin >> ws;
	getline(cin, text);
	size_t position = text.find_first_not_of(' ');		// first letter after space
	while (position != string::npos)
	{
		text[position] = toupper(text[position]);
		position = text.find('.', position + 1);
		if (position != string::npos)
			position = text.find_first_not_of(' ', position + 1);
	}

	cout << text << endl;
	return 0;
}

int cin_vs_getline()
{
	cout << "Write down some text" << endl;
	string text;
	cin >> ws;
	getline(cin, text);									// reads the text until the enter sign
	cout << "Getline: " << text << endl;

	cout << "Write down some more text" << endl;
	cin >> text;										// reads the text until space ' '
	cout << "Cin: " << text << endl;
	return 0;
}