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
	//initializer_lists();
	initializing_variables();
	system("pause");
    return 0;
}

void initializer_lists()
{
	const int a = 3.14;		// converts 3.14 into 3 and reports warning
	int b{ 5 };				// better way of initializing objects using initializer list
//	int b{ 3.14 };			// compiler error because of narrowing conversion, from double to int!!
	char c{};
	cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
}

void initializing_variables()
{
	int a;
	// ReSharper restore CppJoinDeclarationAndAssignment
//	cout << "Uninitialized variable a: " << a << endl;	// compiler error due to uninitialization
// lvalue = rvalue										// left-hand side values = right-hand side values
	int b{ 3 };
	a = b + 5;											// a is lvalue, b + 5 is rvalue where b is lvalue
	cout << "a: " << a << endl;
}
