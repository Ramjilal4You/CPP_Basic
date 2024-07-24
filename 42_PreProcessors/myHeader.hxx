#pragma once	//Other directives

extern int myVal;	//declared

int myVal=10;	//defined

// It is not recommended to put function definitions in a header file. Ideally there should be only
// function declarations. Purpose of this code is to only demonstrate working of header files.
int add(int a, int b)
{
	return( a + b);
}
int multiply(int a, int b)
{
	return a * b;
}
