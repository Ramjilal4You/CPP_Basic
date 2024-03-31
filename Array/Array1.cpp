// C++ Program to demonstrate array features
#include <iostream>
#include <algorithm>

using namespace std;

// array Declaration, Definition & initialization
void array_initialization() {
	//1. array initialization with size using initialier list
	int arr1[5] = { 10, 20, 30, 40, 50 };
	cout<<"arr1 : ";
	for (int i =0; i<5; i++) { cout<<arr1[i]<<" "; }	//printing array elements

	cout<<"\n\n";

	//2. array initialization using initializer list without specifying size
	float arr2[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	cout<<"arr2 : ";
	for (float i : arr2) { cout<<i<<" "; } //printing array elements

	cout<<"\n\n";
	

	//3. array initialization using for loop
	int arr3[5];
	for (int i = 0; i < 5; i++) {
		arr3[i] = i;
	}
	
	//for_each function
	cout<<"arr3 : ";
	for_each (arr3, arr3+5, [](int i){ cout<<i<<" "; }); //printing array elements

	cout<<"\n\n";
	
	//4. Initialize an array partially
	int arr4[5] = { 1};
	cout<<"arr4 : ";
	for (int i : arr4) { cout<<i<<" "; } //printing array elements

	cout<<"\n\n";

	//5. Initialize the array with zero. (Does not work for other value)
	int arr5[5] = { 0 };
	cout<<"arr5 : ";
	for (int i : arr5) { cout<<i<<" "; } //printing array elements

	cout<<"\n\n";
}

// array Access & Update element and array traversal
void array_updation()
{
	// array declaration and initialization
	int arr[5] = { 10, 20, 30, 40, 50 };
	cout<<"array_updation()\nInitial arr  :  ";
	for (int i : arr) { cout<<i<<" "; } //printing array elements

	// modifying element at index 2
	arr[2] = 100;
	
	// traversing array using for loop
	cout<<"\nModified Array: ";
	for (int i = 0; i < 5; i++) {
		cout<<arr[i]<<" ";
	}
	printf("\n\n");
}

int main()
{
	array_initialization();
	array_updation();

	return 0;
}
