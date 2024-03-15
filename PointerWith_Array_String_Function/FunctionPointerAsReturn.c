// C program for the above approach
#include <stdio.h>
typedef int (*ptr)(int*);
typedef ptr (*pm)();

int funct2(int* y){
	printf("int funct2(int* y)\n");
	return *y;
}

// Function that return type ptr
ptr funct1(){
	printf("ptr funct1()\n");

	//int(*pt)(int*)=fun2;
	//return pt
	return &funct2;	//return fun2;
}

// Driver Code
//int main(){
//	int a = 10;
//	pm u = funct1;
//	printf("%d", (*u())(&a));
//	return 0;
//}
