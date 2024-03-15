// C++ program to implement pointer to pointer
#include <iostream>

using namespace std;

void DoublePointerExample() 
{
	//Pointers to pointers int** ptr;  (Complex ptr) Multi - levels of indirection
	int val1 = 10;
	int val2 = 20;
	int* ptr1 = &val1;	// Pointer to store the address of variable
	int** ptr2 = &ptr1;	// double pointer to store the address of pointer1
	cout << "&val1 = " << &val1 << "\tval1 = " << val1 << endl;
	cout << "&ptr1 = " << &ptr1 << "\tptr1 = " << ptr1 << "\t*ptr1 = " << *ptr1 << endl;
	cout << "&ptr2 = " << &ptr2 << "\tptr2 = " << ptr2 << "\t**ptr2 = " << **ptr2;
	cout << "\n\n";
}

void MemoryAllocationtoDoublePointer() {
	//pointer to pointer
	int* ptr;
	ptr = new int;
	*ptr = 10;

	cout << "&ptr : " << &ptr << endl;
	cout << "ptr : " << ptr << endl;
	cout << "*ptr : " << *ptr << endl;
	cout << endl;

	int** dptr;
	dptr = new int*;
	//**dptr = 30;	//pointing to undefined location
	*dptr = ptr;

	cout << "&dptr : " << &dptr << endl;
	cout << "dptr : " << dptr << endl;
	cout << "*dptr : " << *dptr << endl;
	cout << "**dptr : " << **dptr << endl;

}

//int main() {
//
//	DoublePointerExample();
//
//	//MemoryAllocationtoDoublePointer();
//
//	return 0;
//}