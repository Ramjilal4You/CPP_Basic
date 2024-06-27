// C++ program to show User-defined & Library function.
// function declaration, definition & call

#include <iostream>
#include <cmath>
using namespace std;

// User-Defined function
int add(int a, int b)
{
	int total = a + b;
	return total;
}

//int main()
//{
//	//calling to user-defined function 
//	int total = add(10, 30);
//	cout << "Sum is: " << total << "\n\n";
//
//	// predefined C++ library function
//	// Computing the square root with the help of predefined C++ library function
//	int Number = 49;
//	int squareRoot = sqrt(Number);  //int sqrt(int x);
//	cout << "The Square root of " << Number << " = " << squareRoot << "\n\n";
//
//	// predefined C++ library function
//	cout << "Value 2 ^ 3 = " << pow(2, 3) << "\n\n";	//int pow(int x, int y);
//
//	return 0;
//}

