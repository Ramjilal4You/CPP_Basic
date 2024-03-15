// C++ program to illustrate Pointers
/*
* 1. What is pointer, How to use?
*	Pointer is a variable that stores address of other identifiers (variables, functions, other pointers)
*	-	We can use these pointers to access and manipulate the data stored at that address.
-	-	Allow low-level memory access, dynamic memory allocation.

*/
#include <iostream>
using namespace std;

/*** 1. What is pointer, How to use? ***/
void pointer_Example1()
{
	int var = 10;	//define a normal variable 

	int * ptr;	// define a pointer variable

	ptr = & var;	// Assign the address of a variable to a pointer.
				// Note:- the data type of ptr & var must be same.

	cout << "Value at ptr = " << ptr;
	cout << "\nAddress of var = " << &var;
	cout << "\nValue at var = " << var;
	cout << "\nValue at *ptr = " << *ptr;
	cout << "\n\n";
}

void pointer_Example2()
{
	int * ptr;	// define a pointer variable

	ptr = new int;	// aloocate new memory block and assign address of it to pointer

	* ptr = 20;	// putting the 20 to that memory block

	cout << "Value at ptr = " << ptr;
	cout << "\nAddress of ptr = " << & ptr;
	cout << "\nValue at *ptr = " << * ptr;
	cout << "\n\n";
}
int main()
{
	//local variabl with pointer
	pointer_Example1();

	//dynamic memory allocation
	pointer_Example2();

	return 0;
}
