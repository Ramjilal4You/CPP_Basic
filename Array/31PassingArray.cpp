/*	***	Methods to Pass Array to a Function in C++	***
* In C++, we have the following ways to pass an array as a parameter to the function:

	1. As a sized array
	2. As an unsized array
	3. As a pointer to an element of an array
	4. As a pointer to An Array (pass by pointer)
	5. As a reference (pass by reference)

*/

#include <iostream>
using namespace std;

/************************ 1D Array **********************/

// 1. As a sized array
void UpdateArray1(int arr[5]) 
{ 
    for (int i = 0; i < 5; i++) 
        arr[i] = arr[i] + 5; 
}

// 2. As an unsized array
void UpdateArray2(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        arr[i] = arr[i] + 5; 
} 

// 3. As a pointer to an element of an array
void UpdateArray3(int* ptr, int n) 
{ 
    for (int i = 0; i < n; i++) 
        ptr[i] = ptr[i] + 5; 
}

// 4. As a pointer to An Array (pass by pointer)
void UpdateArray4(int (*ptr)[5], int n) 
{ 
    for (int i = 0; i < n; i++) 
        *ptr[i] = *ptr[i] + 5; 
} 

// 5. As a reference (pass by reference)
void UpdateArray5(int (&arr)[5], int n) 
{ 
    for (int i = 0; i < 5; i++) 
        arr[i] = arr[i] + 5; 
} 


void Array_1D(){ 
	int arr[5] = { 10, 20, 30, 40, 50 };
	cout<<"Size of Array in main(): " << sizeof(arr) << " Bytes"<<endl;
	cout<<"Array Elements (Original) : ";
	for (int ele : arr){ cout << ele << " "; } // printing array elements 

	// 1. As a sized array
	UpdateArray1(arr);
    cout<<"\n\nAfter UpdateArray1 : ";
	for (int ele : arr){ cout << ele << " "; } // printing array elements 

	// 2. As an unsized array
	UpdateArray2(arr, 5);
    cout<<"\n\nAfter UpdateArray2 : ";
	for (int ele : arr){ cout << ele << " "; } // printing array elements 

	// 3. As a pointer to an element of an array
	UpdateArray3(arr, 5);
    cout<<"\n\nAfter UpdateArray3 : ";
	for (int ele : arr){ cout << ele << " "; } // printing array elements 

	// 4. As a pointer to An Array (pass by pointer)
	UpdateArray4(&arr, 5);
    cout<<"\n\nAfter UpdateArray4 : ";
	for (int ele : arr){ cout << ele << " "; } // printing array elements 

	// 5. As a reference (pass by reference)
	UpdateArray5(arr, 5);
    cout<<"\n\nAfter UpdateArray5 : ";
	for (int ele : arr){ cout << ele << " "; } // printing array elements 
}
/************************ 2D Array **********************/

// passing a 2D array to a function
const int m=2, n=3;
void print_2D_Array1(int arr[m][n]) //if M and N Globally declared
{
	cout<<"print_2D_Array1(int arr[m][n])\n";
	//arr = { {1, 2, 3}, {4, 5, 6} };
	int i, j;
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			cout<< arr[i][j] << " ";
		}
		cout<<endl;
	}
	
	cout<<"\n\n";
}

void print_2D_Array2(int arr[][n], int m) //if atleast N Globally declared
{
	cout<<"print_2D_Array2(int arr[][n], int m)\n";
	//arr = { {1, 2, 3}, {4, 5, 6} };
	int i, j;
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			cout<< arr[i][j] << " ";
		}
		cout<<endl;
	}
	
	cout<<"\n\n";
}

void print_2D_Array3(int* arr)	// Using single pointer
{
	cout<<"print_2D_Array3(int* arr)\n";
	//arr = { {1, 2, 3}, {4, 5, 6} };
	int i, j;
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			cout<< * ( arr + i*n + j) <<" ";
		}
		cout<<endl;
	}
	
	cout<<"\n\n";
}

void print_2D_Array4(int (*arr)[n])	// Using the concept of pointer to an array
{
	cout<<"print_2D_Array4(int (*arr)[n])\n";
	//arr = { {1, 2, 3}, {4, 5, 6} };
	int i, j;
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			cout<< * ( *( arr + i ) + j) <<" ";
		}
		cout<<endl;
	}
	
	cout<<"\n\n";
}

void print_2D_Array5(int (*arr)[m][n])	// Using the concept of pointer to 2d array
{
	cout<<"print_2D_Array5(int (*arr)[m][n])\n";
	//arr = { {1, 2, 3}, {4, 5, 6} };
	int i, j;
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			cout<< * ( *( *arr + i ) + j) <<" ";
		}
		cout<<endl;
	}
	
	cout<<"\n\n";
}

void print_2D_Array6(int (&arr)[m][n])	// Using the concept of reference to 2d array
{
	cout<<"print_2D_Array6(int (&arr)[m][n])\n";
	//arr = { {1, 2, 3}, {4, 5, 6} };
	int i, j;
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			cout<< arr[i][j] <<" ";
		}
		cout<<endl;
	}
	
	cout<<"\n\n";
}

void Array_2D(){
	//2. passing a 2D array to a function
	int arr1[][3] = { {1, 2, 3}, {4, 5, 6} };

	print_2D_Array1(arr1);	  	//1. When both dimensions are available globally 
	print_2D_Array2(arr1, 2); 	//2. When only second dimension is available globally 
	print_2D_Array3((int*)arr1);	  //3. Using a single pointer 
	print_2D_Array4(arr1);		//4. Using the concept of pointer to an array
	print_2D_Array5(&arr1);		//5. Using the concept of pointer to 2d array
	print_2D_Array6(arr1);		//6. Using the concept of reference to 2d array
}
/************************ Return Array **********************/
// return an array from a function
int* return_array(){
	//Note: declared static array.if we create a local array instead of static, 
	//we will get segmentation fault while trying to access the array in the main function.
	static int arr[5] = { 1, 2, 3, 4, 5 };

	return arr;
}

typedef int(&td)[5];

td return_array1(){
	//Note: declared static array.if we create a local array instead of static, 
	//we will get segmentation fault while trying to access the array in the main function.
	static int arr[5] = { 1, 2, 3, 4, 5 };

	return arr;
}

int main()
{
	
	//Passing Array to function
	Array_1D();

	cout<<"\n\n\n";

	Array_2D();
	
	// returned array
	int* ptr = return_array();
	cout<<"\n\nReturned Array : ";
	for (int i = 0; i < 5; i++) {  cout<< *(ptr + i) <<" ";	}

	int (&arr)[5] = return_array1();
	cout<<"\n\nReturned Array(As reference) : ";
	for (int i = 0; i < 5; i++) {  cout<< *(ptr + i) <<" ";	}

	cout<<"\n\n";
	return 0;
}
