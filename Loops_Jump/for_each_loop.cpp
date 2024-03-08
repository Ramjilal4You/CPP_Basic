/* for-each loops. */
/*
* Syntax:
	for_each (InputIterator start_iter, InputIterator last_iter, Function fnc)

	start_iter : The beginning position from where function operations has to be executed.
	last_iter : The ending position till where function has to be executed.
	fnc/obj_fnc : a function or an object function which operation would be applied to each element.
*/

// C++ code to demonstrate the working of for_each loop

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// helper function 1
void print(int a)
{
	cout << a << " ";
}

void for_eachForArray() {
	// initializing array
	int arr[5] = { 1, 5, 2, 4, 3 };

	cout << "*** Using Arrays : for_eachForArray ***" << endl;

	// printing array using for_each using function
	cout << "\nPrinting elements using for_each & print function : ";
	for_each(arr, arr + 5, print);

}

// helper function 2 object type function
struct MyStruct
{
	void operator() (int a)
	{
		cout << a * 2 << " ";
	}
} ob1;

void for_eachForObject() {
	// initializing array
	int arr[5] = { 1, 5, 2, 4, 3 };

	// printing array using for_each using object function
	cout << "\n\nMultiple of 2 of elements are : ";
	for_each(arr, arr + 5, ob1);
}

void for_eachForVector() {
	// initializing vector
	vector<int> arr1 = { 4, 5, 8, 3, 1 };

	cout << "\n\n*** Using Vectors : for_eachForVector ***" << endl;


	// printing array using for_each using function
	cout << "\nPrinting elements using for_each & print function : ";
	for_each(arr1.begin(), arr1.end(), print);

	cout << endl;

	// printing array using for_each using object function
	cout << "\nMultiple of 2 of elements are : ";
	for_each(arr1.begin(), arr1.end(), ob1);
}

// working of for_each with Exception
void printx2(int a)
{
	cout << a << " ";
	if (a % 2 == 0)
	{
		throw a;
	}
}


void for_eachWithException()
{
	// Initializing array
	int arr[5] = { 1, 5, 2, 4, 3 };

	cout << "\n\nUsing Array : for_eachWithException" << endl;

	// Printing Exception using for_each using function
	try
	{
		for_each(arr, arr + 5, printx2);
	}
	catch (int i)
	{
		cout << "\nThe Exception element is : " << i;
	}
	cout << endl;
}

void for_eachWithlambda()
{
	cout << "\n\nUsing vector : for_eachWithlambda" << endl;
	vector<int> vec{ 1, 5, 2, 4, 3 };

	cout << "\nInitial vector elements are   : ";
	// this prints all the values in the vector;
	for_each(vec.begin(), vec.end(), [](int a) { cout << a << " "; });

	// this increases all the values in the vector by 1;
	for_each(vec.begin(), vec.end(), [](int& a) { a=a*2; });
	cout << "\nMultiple of 2 of elements are : ";
	// this prints all the values in the vector;
	for_each(vec.begin(), vec.end(), [](int a) { cout << a << " "; });
}

//int main()
//{
//	for_eachForArray();
//	for_eachForObject();
//	for_eachForVector();
//	for_eachWithException();
//	for_eachWithlambda();
//
//	cout << endl;
//	return 0;
//}
