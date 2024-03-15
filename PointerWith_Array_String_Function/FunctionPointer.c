#include <stdio.h> 
// A normal function with an int parameter and void return type 
void fun(int a)
{
	printf("In fun(int a) : ");
	printf("Value of a is %d\n", a);
}

int addTwoNumber(int a, int b)
{
	printf("\nIn add(int a, int b) : ");
	printf("Value of a is %d and b is %d\n", a, b);
	return a + b;
}

//int main()
//{
//	// fun_ptr is a pointer to function fun() 
//	//void (*fun_ptr)(int) = &fun;
//	//void *fun_ptr(int) = &fun;
//
//	// Assigning function address without & operator
//	// int (*fun_ptr)(int) = fun;
//
//	/* //The above line is equivalent of following two
//	void (*fun_ptr)(int);
//	fun_ptr = &fun;
//	*/
//
//	// Invoking fun() using fun_ptr 
//	//(*fun_ptr)(10);
//
//	int (*add_ptr)(int, int) = addTwoNumber;	//removed &
//	int result = add_ptr(5, 3);		//removed *
//	printf("\nIn main() : Sum of 5+3 is %d\n", result);
//
//	return 0;
//}
