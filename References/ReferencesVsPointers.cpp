/* *** Difference Between Reference Variable and Pointer Variable ***

* - A reference is the same object, just with a different name and a reference must refer to an object. Since references can’t be NULL, they are safer to use. 

* 1. A pointer can be re-assigned while a reference cannot, and must be assigned at initialization only.
* 2. The pointer can be assigned NULL directly, whereas the reference cannot.
* 3. Pointers can iterate over an array, we can use increment/decrement operators to go to the next/previous item that a pointer is pointing to.
* 4. A pointer is a variable that holds a memory address. A reference has the same memory address as the item it references.
* 5. A pointer to a class/struct uses ‘->’ (arrow operator) to access its members whereas a reference uses a ‘.’ (dot operator)
* 6. A pointer needs to be dereferenced with * to access the memory location it points to, whereas a reference can be used directly.
*/

// C++ program to demonstrate differences
// between pointer and reference
#include <iostream>
using namespace std;

struct demo {
	int a;
};

int main()
{
	int x = 5;
	int y = 6;
	demo d;

// 1. Pointer re-assignment allowed but not allowed with reference.
	int* ptr;
	ptr = &x;
	ptr = &y; 

	int& ref = x;
	// &ref = y;				 // 1. Compile Error

	ref = y;                 // 1. x value becomes 6

// 2. Compile Error : reference can't be NULL
	ptr = NULL;
	// &ref = NULL;			 

// 3. Pointer Arithmatics : Points to next memory location
    int arr[]={10,20};
	int* ptr_arr =arr;
    int* &ref_arr = ptr_arr;
    cout<<"ptr_arr : "<<*ptr_arr<<endl;
    cout<<"ref_arr : "<<ref_arr<<endl;

    ptr++;  // Address get incremented
	ref++;  // value get incremented
    cout<<"ptr_arr++ : "<<*ptr_arr<<endl;
    cout<<"ref_arr++ : "<<ref_arr<<endl;

// 4. pointer has separate memory address but reference not
	cout << &ptr << " " << &x << '\n'; // 4. Different address
	cout << &ref << " " << &x << '\n'; // 4. Same address

	demo* ptr_d = &d;
	demo& ref_d = d;

//5. pointers use -> but references use . operator
	ptr_d->a = 8;
	// ptr_d.a = 8;				 // 5. Compile Error
	ref_d.a = 8;
	// ref_d->a = 8;			 // 5. Compile Error

// 6. Prints the address
	cout << ptr << '\n';
	cout << ref << '\n';    // 6. Print the value of x


//Making reference NULL;
int *nptr = NULL;
int &ref_nptr = *nptr;

cout<<ref_nptr;

	return 0;
}


/* *** Which is preferred, Passing by Pointer Vs Passing by Reference in C++?  ***
*   1. References are usually preferred over pointers whenever we don’t need “reseating”.
*   2. If we want to use NULL in our function arguments, prefer pointers.

*   - Overall, Use references when you can, and pointers when you have to.
*/