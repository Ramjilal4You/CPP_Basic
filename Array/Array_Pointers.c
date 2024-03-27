// C Program to demonstrate the relation between arrays and pointers
#include <stdio.h>
#include <stdlib.h>

void arrays_and_pointers() {
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* ptr = arr;  //&arr[0]

	// comparing address of first element and address stored inside array name
	printf("Address Stored in Array name: %p\nAddress of 1st Array Element: %p\n", arr, arr);

	// printing array elements using pointers
	printf("Array elements using pointer: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *ptr++);
	}
	printf("\n\n");
}

// C Program to pass an array to a function
void printArray(int arr[], int n)
{
	printf("Size of Array in Functions: %u\n", sizeof(arr));
	printf("Array Elements: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

// C Program to pass a 2D array to a function
//void print(int arr[M][N]) //if M and N Globally declared
//void print(int arr[][N]) //if atleast N Globally declared
void print_2D_Array(int *arr, int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			printf( "%d ", *((arr+i*n)+j) );
	printf("\n\n");
}


// C Program to return an array from a function
int* return_array(){
	//Note: declared static array.if we create a local array instead of static, 
	//we will get segmentation fault while trying to access the array in the main function.
	static int arr[5] = { 1, 2, 3, 4, 5 };

	return arr;
}

//int main()
//{
//	//arrays_and_pointers();
//
//	/*int arr[5] = { 10, 20, 30, 40, 50 };
//	printf("Size of Array in main(): %u\n", sizeof(arr));
//	printArray(arr, sizeof(arr)/ sizeof(arr[0]));*/
//	
//	//pass a 2D array to a function
//	/*int arr[][3] = { {1, 2, 3}, {4, 5, 6} };
//	print_2D_Array(arr, 2, 3);*/
//
//	int* ptr = return_array();
//	printf("Array Elements: ");
//	for (int i = 0; i < 5; i++) {  printf("%d ", *ptr++);	}
//
//
//	return 0;
//}
