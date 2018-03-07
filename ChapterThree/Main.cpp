// ChapterThree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void initializer_lists();
void initializing_variables();

int gloabalVariable;		// declaration of global variable
int main()
{
	cout << "Demonstration of the usefulness of initializer lists." << endl;
	initializer_lists();
	cout << "Initialization tricks." << endl;
	initializing_variables();

	system("pause");
    return 0;
}

void initializer_lists()
{
	const int a = 3.14;		// converts 3.14 into 3 and reports warning
	int b{ 5 };				// better way of initializing objects using initializer list
//	int b{ 3.14 };			// compiler error because of narrowing conversion, from double to int!!
	int c{};

//	double d{ a };			// error due to narrowing conversion
	double e = a;			// it is allowed

	cout << "int a = 3.14: " << a << endl;
	cout << "int b{ 5 }: " << b << endl;
	cout << "int c{}: " << c << endl;
	cout << "double e = a: " << e << endl;
}

void initializing_variables()
{
	int a;
// ReSharper restore CppJoinDeclarationAndAssignment
//	cout << "Uninitialized variable a: " << a << endl;	// compiler error due to uninitialization
//  lvalue = rvalue										// left-hand side values = right-hand side values
	int b{ 3 };
	a = b + 5;											// a is lvalue, b + 5 is rvalue where b is lvalue
	cout << "a: " << a << endl;

}
