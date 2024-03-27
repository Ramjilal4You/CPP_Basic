// C program to show the implementation of Jagged Arrays

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int row0[3] = { 0, 1, 2 };
//	int row1[2] = { 6, 4 };
//	int row2[5] = { 1, 7, 6, 8, 9 };
//	int row3[1] = { 5 };
//
//	//initialize jagged array
//	int* jagged[4] = { row0, row1, row2, row3 };
//
//	// Array to hold the size of each row
//	int Size[4] = { 3, 2, 5, 1 }, k = 0;
//
//	// To display elements of Jagged array
//	for (int i = 0; i < 4; i++) {
//		// pointer to hold the address of the row
//		int* ptr = jagged[i];
//
//		for (int j = 0; j < Size[k]; j++) {
//			printf("%d ", ptr[j]);
//		}
//
//		printf("\n");
//		k++;
//
//		// move the pointer to the next row
//		jagged[i]++;
//	}
//
//	return 0;
//}
