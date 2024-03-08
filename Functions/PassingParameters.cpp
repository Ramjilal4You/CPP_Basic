// C++ program to show use of call by value, Reference & pointers.
#include <iostream>
using namespace std;

//use of call by value
//pass the value as an argument
void call_by_value(int var)
{
	var = 20;
}

// use of call by Reference
//pass the reference as an argument
void call_by_Reference(int& var)
{
	var = 20;
}

// use of call by Pointer
//pass the Address as an argument
void call_by_Pointer(int* var)
{
	*var = 20;
}

//int main()
//{
//	int num = 10;
//	cout << "Before call_by_value(), num is: " << num << endl;
//	call_by_value(num);
//	cout << "After call_by_value(), num is: " << num << endl;
//
//	int num1 = 10;
//	cout << "\nBefore call_by_Reference(), num is: " << num1 << endl;
//	call_by_Reference(num1);
//	cout << "After call_by_Reference(), num is: " << num1 << endl;
//
//	int num2 = 10;
//	cout << "\nBefore call_by_Reference(), num is: " << num2 << endl;
//	call_by_Pointer(&num2);
//	cout << "After call_by_Reference(), num is: " << num2 << endl;
//
//	return 0;
//}
