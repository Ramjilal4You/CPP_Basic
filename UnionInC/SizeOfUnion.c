// C Program to find the size of the union
#include <stdio.h>

// declaring multiple unions
union test1 {
	int x;
	int y;
} Test1;

union test2 {
	double x;
	char y;
} Test2;

union test3 {
	int arr[10];
	char y;
} Test3;


//int main()
//{
//	// finding size using sizeof() operator
//	printf("Sizeof test1: %zu\n", sizeof(Test1));
//	printf("Sizeof test2: %zu\n", sizeof(Test2));
//	printf("Sizeof test3: %zu\n", sizeof(Test3));
//	return 0;
//}
