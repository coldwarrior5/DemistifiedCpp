// ChapterThree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void initializer_lists();
void initializing_variables();
void memory_size();
void numeric_limits_of_types();
void number_representation();
void arithmetic_opeations();
void arithmetic_overflow();

int gloabalVariable;		// declaration of global variable
int main()
{
	cout << "Demonstration of the usefulness of initializer lists." << endl;
	initializer_lists();
	cout <<endl << "Initialization tricks." << endl;
	initializing_variables();
	cout << endl << "How much data does each initializer store?" << endl;
	memory_size();
	cout << endl << "What is the range of numbers of each type?" << endl;
	numeric_limits_of_types();
	cout << endl << "Different ways we can display same number." << endl;
	number_representation();
	cout << endl << "Arithmetic operations." << endl;
	arithmetic_opeations();
	cout << endl << "Arithmetic overflow." << endl;
	arithmetic_overflow();

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
	unsigned int i = -5;								// i{-5} sets off compiler error
	cout << "a = b + 5: " << a << endl;
	cout << "unsigned int i = -5: " << i << endl;
	cout << "global variable: " << gloabalVariable << endl;
}

void memory_size()
{
	cout << "int size: " << sizeof(int) << " bytes" << endl;
	cout << "short size: " << sizeof(short) << " bytes" << endl;
	cout << "long size: " << sizeof(long) << " bytes" << endl;
	cout << "long long size: " << sizeof(long long) << " bytes" << endl;
	cout << "float size: " << sizeof(float) << " bytes" << endl;
	cout << "double size: " << sizeof(double) << " bytes" << endl;
	cout << "long double size: " << sizeof(long double) << " bytes" << endl;
	cout << "char size: " << sizeof(char) << " bytes" << endl;
}

void numeric_limits_of_types()
{
	cout << "int: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
	cout << "short: " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
	cout << "long: " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;
	cout << "long long: " << numeric_limits<long long>::min() << " to " << numeric_limits<long long>::max() << endl;
	cout << "float: " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;
	cout << "double: " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << endl;
	cout << "long double: " << numeric_limits<long double>::min() << " to " << numeric_limits<long double>::max() << endl;
	cout << "char: " << numeric_limits<char>::min() << " to " << numeric_limits<char>::max() << endl;
}

void number_representation()
{
	int a{ 32 };
	int b{ 032 };
	cout << "(dec) int a{32}: " << a << " vs (oct) int b{032}: " << b << endl;
	a = { 040 };
	cout << "(oct) a = 040: " << a << endl;
	a = { 0x20 };
	cout << "(hex) a = {0x20}: " << a << endl;
	a = { 0b00100000 };
	cout << "(bin) a = {0x00100000}: " << a << endl;
}


void arithmetic_opeations()
{
	int x{ 5 };
	int y{ -3 };
	cout << "x: " << x << ", y:" << y << endl;
	int x1 = +x;										// + is needed for overloading purposes, it also casts integer to signed int value if the value was unsigned or of lesser width
	int y1 = +y;
	cout << "x1 = +x: " << x1 << ", y1 = +y:" << y1 << endl;
	x1 = -x;
	y1 = -y;
	cout << "x1 = -x: " << x1 << ", y1 = -y:" << y1 << endl;
	
	cout << "x++: " << x++ << ", y++: " << y++ << endl;
	cout << "++x: " << ++x << ", ++y: " << ++y << endl;
	cout << "x + y: " << x + y << ", x - y: " << x - y << endl;
	double xd{ 5. };
	double yd{ 3. };
	cout << "xd: " << xd << ", yd:" << yd << endl;
	cout << "xd * yd: " << xd * yd << ", xd / yd: " << xd / yd << endl;
	cout << "x % y: " << x % y << endl;
}

void arithmetic_overflow()
{
	int a{numeric_limits<int>::max()};
	cout << "a:" << a << endl;
	cout << "++a" << ++a << endl;


}
