/* Single & Multi - dimensional Array  */

#include<iostream>
using namespace std;

// array Declaration, Definition & initialization
void array_1d() {
	// array initialization with size using initialier list
	int arr[5] = { 10, 20, 30, 40, 50 };

	cout<<"1D Array:\n";
	// printing 2d array

	for (int i = 0; i < 5; i++) {
		cout<<arr[i]<<" ";
	}

    cout<<"\n\n";
}

void array_2d(){
	// declaring and initializing 2d array
	int arr[][3] = { 10, 20, 30, 40, 50, 60 };
	int arr1[2][3] = { {10, 20, 30}, {40, 50, 60} };
	int (*ptr)[2][3] = &arr;	//pointer to a 2D array of int[2][3]
	int (*ptr1)[3] = &arr[0];	//pointer to a array of 3 int

	cout<<"2D Array:\n";
	// printing 2d array
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			//cout<<arr1[i][j]<<" ";
			//cout<< * ( *( *ptr + i) + j ) <<" ";
			//cout<< * ( *( ptr1 + i) + j ) <<" ";
			cout<< * ( *( arr + i) + j ) <<" ";

		}
		cout<<"\n";
	}
	cout<<"\n\n";
}

// 3d array
void array_3d(){
	// 3D array declaration
	int arr[2][2][2] = { { {10, 20}, {30, 40} }, { {50, 60} , {70, 80} } };

	cout<<"3D Array:\n";
	// printing elements
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				cout<<arr[i][j][k]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	cout<<"\n\n";
}

int main()
{
    //array_1d();
	//array_2d();
	array_3d();

	return 0;
}
