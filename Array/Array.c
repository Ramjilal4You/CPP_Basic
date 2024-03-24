// C Program to demonstrate array features
#include <stdio.h>

// C function to demonstrate array Declaration, Definition & initialization
void array_initialization() {
	// array initialization with size using initialier list
	int arr[5] = { 10, 20, 30, 40, 50 };

	// array initialization using initializer list without specifying size
	int arr1[] = { 1, 2, 3, 4, 5 };

	// array initialization using for loop
	float arr2[5];
	for (int i = 0; i < 5; i++) {
		arr2[i] = (float)i * 2.1;
	}
}
// C function to demonstrate the array Access & Update element and array traversal
void array_traversal()
{
	// array declaration and initialization
	int arr[5] = { 10, 20, 30, 40, 50 };

	// modifying element at index 2
	arr[2] = 100;

	// traversing array using for loop
	printf("Elements in Array: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}

void array_2d(){
	// declaring and initializing 2d array
	int arr[2][3] = { 10, 20, 30, 40, 50, 60 };
	int arr1[2][3] = { {10, 20, 30}, {40, 50, 60} };

	printf("2D Array:\n");
	// printing 2d array
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
}
// C Program to illustrate the 3d array
void array_3d(){
	// 3D array declaration
	int arr[2][2][2] = { 10, 20, 30, 40, 50, 60, 70, 80 };

	printf("3D Array:\n");
	// printing elements
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				printf("%d ", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("\n");
}

//int main()
//{
//	//array_initialization();
//	//array_traversal();
//	
//	array_2d();
//	//array_3d();
//
//	return 0;
//}
