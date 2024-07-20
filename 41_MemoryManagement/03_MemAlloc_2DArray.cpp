//Memory allocation to 2D array using new;

#include <iostream>
#include <memory>
using namespace std;

void MemAlloc2DArray_1(){
    cout<<"+MemAlloc2DArray_1()\n";
	int r = 3, c = 4;

	int* ptr = new int[r*c];

	/* Putting 1 to 12 in the 1D array in a sequence */
	for (int i = 0; i < r * c; i++)
		ptr[i] = i + 1;

	/* Accessing the array values as if it was a 2D array */
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
			printf("%d ", ptr[i * c + j]);
		printf("\n");
	}

	delete []ptr;
    cout<<"-MemAlloc2DArray_1()\n";
}

void MemAlloc2DArray_2(){
    cout<<"+MemAlloc2DArray_2()\n";
	int r = 3, c = 4;
	int i, j, count;

	int* arr[3];
	for (i = 0; i < r; i++)
		arr[i] = new int[c];

	// Note that arr[i][j] is same as *(*(arr+i)+j)
	count = 0;
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			arr[i][j] = ++count; // Or *(*(arr+i)+j) = ++count

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	/* Code for further processing and free the dynamically allocated memory */
	for (int i = 0; i < r; i++)
		delete[] arr[i];

    //delete arr;   //will give exception as trying to delete stack memory
    
    cout<<"-MemAlloc2DArray_2()\n";
}

void MemAlloc2DArray_3(){
    cout<<"+MemAlloc2DArray_3()\n";
	int r = 3, c = 4, i, j, count;

	int** arr = new int*[r];
	for (i = 0; i < r; i++)
		arr[i] = new int[c];

	// Note that arr[i][j] is same as *(*(arr+i)+j)
	count = 0;
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			arr[i][j] = ++count; // OR *(*(arr+i)+j) = ++count

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	/* Code for further processing and free the dynamically allocated memory */

	for (int i = 0; i < r; i++)
		delete []arr[i];

	delete[] arr;
    cout<<"-MemAlloc2DArray_3()";
}

int main() {

	MemAlloc2DArray_1();	//Using a single pointer and a 1D array with pointer arithmetic
    printf("\n\n");
	MemAlloc2DArray_2();	//Using an array of pointers 
	printf("\n\n");
	MemAlloc2DArray_3();	//Using pointer to a pointer

	return 0;
}
