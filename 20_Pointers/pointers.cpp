// C++ Pointers
/*
* 1. Why, What & How with Pointers
*	Q. Why we need pointers?
*	Q. What is Pointers?	-> Types & It's size
*	Q. How to use pointers?

*	Pointer is a variable that stores address of other identifiers (variables, functions, other pointers)
*	-	We can use these pointers to access and manipulate the data stored at that address.
-	-	Allow low-level memory access, dynamic memory allocation.

*/
#include <iostream>
using namespace std;

/*** 1. What is pointer, How to use? ***/
void pointer_Example1()
{
	int var = 10;	//define a normal variable 

	int * ptr = NULL;	// define a pointer variable

	ptr = & var; // Assign the address of a variable to a pointer.
				// Note:- the data type of ptr & var must be same.

	cout<<"pointer_Example1\n";
	cout << "\nValue at var = " << var;
	cout << "\nAddress of var = " << &var;
	cout << "\nValue at ptr = " << ptr;
	cout << "\nValue at *ptr = " << *ptr;
	cout << "\n\n";
}

void pointer_Example2()
{
	int * ptr2;	// define a pointer variable

	// aloocate new memory block & assign address to pointer
	ptr2 = new int;	

	* ptr2 = 20;	// assigning 20 to that memory block

	cout<<"pointer_Example2\n";
	cout << "\nValue at ptr2 = " << ptr2;
	cout << "\nValue at *ptr2 = " << * ptr2;
	cout << "\nAddress of ptr2 = " << & ptr2;
	cout << "\n\n";
}
int main()
{
	cout<<endl;

	pointer_Example1();	//local variabl with pointer

	pointer_Example2();	//dynamic memory allocation

	return 0;
}
