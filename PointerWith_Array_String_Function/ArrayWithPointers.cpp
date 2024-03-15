#include <iostream>

using namespace std;

void ArrayWithPointer()
{

	// defining array
	int arr[] = { 1, 2, 3, 4, 5 };

	cout << " arr = &arr = &arr[0]\n";
	cout << arr << " " << &arr << " " << &arr[0] << endl;

	// defining the pointer to array
	int* ptr_arr = arr;

	int len = *(&arr + 1) - arr;   //Not same as arr+1
	cout << "Length of Array : " << len << endl;

	// traversing array using pointer arithmetic
	cout << "Array Elements : ";
	for (int i = 0; i < len; i++) {
		cout << *ptr_arr++ << " ";
	}
	return;
}

//int main()
//{
//	ArrayWithPointer();
//
//	return 0;
//}