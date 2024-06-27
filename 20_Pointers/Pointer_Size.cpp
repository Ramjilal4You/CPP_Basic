// C++ program to illustrate Pointers
/*
* Size of pointers?
*	- Depends on the operating system and CPU architecture.
*	- Does not depend on the type it is pointing to.
		-> 8 bytes for a 64-bit System
		-> 4 bytes for a 32-bit System
*/
#include <iostream>
using namespace std;

/*** Size of pointers? ***/
// dummy structure
struct myStruct {
	int a;
};

// dummy function
void func(int a, int b) {};

// size of different pointers types
void Size_Of_Pointer()
{
	// dummy variables definitions
	int a = 10;
	char c = 'G';
	struct myStruct x;

	// pointer definitions of different types
	int* ptr_int = &a;
	char* ptr_char = &c;
	struct myStruct* ptr_struct = &x;
	void (*ptr_func)(int, int) = &func;
	void* ptr_void = NULL;

	// printing sizes
	cout << "\nSize of Integer Pointer (bytes)    : " << sizeof(ptr_int);

	cout << "\nSize of Character Pointer (bytes)  : " << sizeof(ptr_char);

	cout << "\nSize of Structure Pointer (bytes)  : " << sizeof(ptr_struct);

	cout << "\nSize of Function Pointer (bytes)   : " << sizeof(ptr_func);

	cout << "\nSize of NULL Void Pointer (bytes)  : " << sizeof(ptr_void);

	cout << "\n\n";
}


int main()
{
	Size_Of_Pointer();

	return 0;
}


/**** Advantages & Disadvantages of Pointers ****/
/*
*** Advantages of Pointers ***
1. Pass Arguments by address(pointer)
2. Accessing Array Elements
3. Return Multiple Values from Function
4. Dynamic Memory Allocation
5. Implementing Data Structures
6. In System-Level Programming where memory addresses are useful.
7. In locating the exact value at some memory location.
8. To avoid compiler confusion for the same variable name.
*/

/*
*** Disadvantages of Pointers ***
1. Memory corruption can occur if an incorrect value is provided to pointers.
2. Uninitialized pointers might cause a segmentation fault.
3. Pointers are majorly responsible for memory leaks.
4. Pointers are comparatively slower than variables.
5. Pointers are a little bit complex to understand.
*/