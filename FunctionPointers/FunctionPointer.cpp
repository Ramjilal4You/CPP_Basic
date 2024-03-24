/*
* What is function pointer?
* Function pointer Declaration, Definition, Initialization/Assignment.
* Function invoke using function pointer
* They are mainly useful for event-driven applications, callbacks, and even for storing the functions in arrays.
*/
#include <iostream>
using namespace std;

// A function with an int parameter and void return type 
void fun(int a)
{
	printf("\nIn fun(int a) : ");
	printf("Value of a is %d\n", a);
}

// A function with two parameters and int return type 
int addTwoNumber(int a, int b)
{
	printf("\nIn add(int a, int b) : ");
	printf("Value of a is %d and b is %d\n", a, b);
	return a + b;
}

int main()
{
	//print address of functions using function names
	printf("address of main() using main : %p\n",main); 
	printf("address of fun() using fun   : %p\n",fun );
	printf("address of fun() using &fun  : %p\n",&fun); 


	// fun_ptr is a pointer to function fun()
	//define a function pointer
	void (*fun_ptr)(int);

	//assign function address
	fun_ptr = &fun;		// fun_ptr = fun;	// Assigning function address without & operator

	// Invoking fun() using fun_ptr 
	(*fun_ptr)(10);		//*fun_ptr(10);	//this will not work


	//2nd example
	int (*add_ptr)(int, int) = addTwoNumber;	//Without &, works fine

	int result = add_ptr(5, 3);		//Without *, works fine

	printf("\nIn main() : Sum of 5+3 is %d\n", result);

	return 0;
}
