// A simple C program to show function pointers as parameter 
#include <stdio.h> 


// Two simple functions 
void func1() { printf("Func1\n"); }
void func2() { printf("Func2\n"); }

// A function that receives a simple function as parameter and calls the function 
void (*wrapper(void (*funPtr)()))()	//void (*funPtr)()	//int *ptr
{
	funPtr();	//calling func1
	return func2;
}

//int main()
//{
//	void (*funPtr2)() = wrapper(func1);
//	funPtr2();	//calling func2
//	return 0;
//}
