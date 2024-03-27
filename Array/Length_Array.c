// C Program to calculate size of an array
#include <stdio.h>

// C Program to calculate size of an array using sizeof() operator
void sizeof_example() {
	int Arr[] = { 1, 2, 3, 4, 5 };

	// variable to store size of Arr
	int length = sizeof(Arr) / sizeof(Arr[3]);

	printf("The length of the array is: %d\n", length);
}

// C Program to calculate size of an array using pointer arithmetic
#include <stdio.h>

void pointer_arithmetic_example()
{

	int Arr[] = { 1, 2, 3, 4, 5, 6 };
	// variable to store the size of Arr
	int length = *(&Arr + 1) - Arr;

	printf("Number of elements in Arr[] is: %d\n", length);
}

// calculate sizeof 3D Array in bytes
void sizeof_3D_Array_example()
{
	int a[][2][2] = { {{1, 2}, {3, 4}},
					   {{5, 6}, {7, 8}}
	}; 
	printf("size of integer(In Bytes) : %lu\n\n", sizeof(int));
	printf("size of integer Array(In Bytes) : %lu\n\n", sizeof(a)); // prints 8*sizeof(int)
}


//int main()
//{
//	sizeof_example();
//	
//	//pointer_arithmetic_example();
//
//	//sizeof_3D_Array_example();
//
//	return 0;
//}
