// FirstApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int get_third_side_of_triangle();
int to_uppercase();
int uppercase_new_sentence();

int main()
{
	get_third_side_of_triangle();
	to_uppercase();
	uppercase_new_sentence();

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

	const auto c = (a > b) ? sqrt(pow(a, 2) - pow(b, 2)) : sqrt(pow(a, 2) + pow(b, 2));
	cout << "Len of c is: " << c << endl;
	return 0;
}

int to_uppercase()
{
	cout << "Write down some text" << endl;
	string text;
	getline(cin, text);

	for(char letter : text)							// iterate through string
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
	getline(cin, text);
	size_t position = text.find_first_not_of(' ');	// first letter after space
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
