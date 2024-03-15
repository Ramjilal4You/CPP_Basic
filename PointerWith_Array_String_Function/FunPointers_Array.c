#include <stdio.h> 
void add(int a, int b)
{
	printf("Addition is %d\n", a + b);
}
void subtract(int a, int b)
{
	printf("Subtraction is %d\n", a - b);
}
void multiply(int a, int b)
{
	printf("Multiplication is %d\n", a * b);
}

//int main()
//{
//	// fun_ptr_arr is an array of function pointers 
//	void (*fun_ptr_arr[])(int, int) = { add, subtract, multiply };
//	int opt, a = 15, b = 10;
//
//	printf("a is %d, b is %d\nEnter Choice: 0 for add, 1 for subtract and 2 for multiply\n", a, b);
//	scanf("%d", &opt);
//
//	if (0 > opt || opt > 2) return 0;
//
//	(*fun_ptr_arr[opt])(a, b);
//
//	return 0;
//}
