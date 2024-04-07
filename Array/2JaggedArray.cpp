// C++ Program to implement Jagged Array 

#include <iostream> 
using namespace std; 

//Problem with 2D array
void JaggedArray1(){
	
	int arr[3][6] = { { 1, 2, 3, 4, 5, 6 },
						{ 7 },
						{ 8, 9 }
					 }; 

	//int sizes[] = { 6, 1, 2 }; 

	cout<<"\nSize of jagged Array : "<<sizeof(arr);
	cout << "\nElements in JaggedArray1" << endl; 
	for (int i = 0; i < 3; i++) { 

		for (int j = 0; j < 6; j++) { 
			// for ith row having sizes[i] no. of columns 

			cout << arr[i][j] << " "; 
		} 
        
		cout << endl;
	} 
}

//Solution of 2D array
void JaggedArray2() 
{ 
	// create 3 row arrays having different sizes 
	int row1[] = { 1, 2, 3, 4, 5, 6}; 
	int row2[] = { 7 }; 
	int row3[] = { 8, 9 }; 

	// storing base address of each row array 
	int* jagged[] = { row1, row2, row3 }; 

	int sizes[] = { 6, 1, 2 }; 

	cout<<"\nSize of jagged Array : "<<sizeof(jagged)+sizeof(row1)+sizeof(row2)+sizeof(row3);
	cout << "\nElements in JaggedArray2" << endl; 
	for (int i = 0; i < 3; i++) { 

		// getting current(ith) row 
		int* ptr = jagged[i]; 

		for (int j = 0; j < sizes[i]; j++) { 
			// for ith row having sizes[i] no. of columns 

			cout << *(ptr + j) << " "; 
			// *ptr have base address 
			// adding j means access jth element for particular(ith) row 
		} 
        
		cout << endl;
	} 

	cout << "\n\n"; 
}

int main(){
	
	JaggedArray1();	//problem with 2D array

	JaggedArray2(); //solution

	return 0;
}
