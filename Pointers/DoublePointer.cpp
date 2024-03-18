/*	C++ program to implement pointer to pointer
*
* Q. What is double pointer?
*	- How to create Double Pointer?
*	- How to allocate memory dynamically to double pointer?
*
*/
#include <iostream>
using namespace std;

void DoublePointerExample() 
{
	cout<<"\nDoublePointerExample()\n\n";

	//Pointers to pointers int** ptr;  (Complex ptr) Multi - levels of indirection
	int val1 = 10;

	int* ptr1 = &val1;	// Pointer to store the address of variable
	int** ptr2 = &ptr1;	// double pointer to store the address of pointer1

	cout << "&val1 = " << &val1 << "\tval1 = " << val1 << endl;
	cout << "&ptr1 = " << &ptr1 << "\tptr1 = " << ptr1 << "\t*ptr1 = " << *ptr1 << endl;
	cout << "&ptr2 = " << &ptr2 << "\tptr2 = " << ptr2 << "\t**ptr2 = " << **ptr2;
	cout << "\n\n";
}

void MemoryAllocationtoDoublePointer() {
	cout<<"\nMemoryAllocationtoDoublePointer()\n\n";
	//pointer to pointer
	int** dptr=nullptr;
	dptr = new int*;
	*dptr = new int;
	** dptr=30;

	cout << "&dptr : " << &dptr << endl;
	cout << "dptr : " << dptr << endl;
	cout << "*dptr : " << *dptr << endl;
	cout << "**dptr : " << **dptr << endl;

	cout<<"\n\n";
}

int main() {

	DoublePointerExample();

	MemoryAllocationtoDoublePointer();

	return 0;
}


/***	Application of Double Pointers	***
- Used in the dynamic memory allocation of multidimensional arrays.
- Used to store multilevel data such as the text document paragraph, sentences, and word semantics.
- Used in data structures to directly manipulate the address of the nodes without copying.
- Used as function arguments to manipulate the address stored in the local pointer.

*/