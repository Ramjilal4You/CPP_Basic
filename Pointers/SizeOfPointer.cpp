// C++ program to illustrate Pointers
/*
* 3. Size of pointers?
*	- Depends on the operating system and CPU architecture.
*	- Does not depend on the type it is pointing to.
		-> 8 bytes for a 64-bit System
		-> 4 bytes for a 32-bit System
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
	struct myStruct* ptr_str = &x;
	void (*ptr_func)(int, int) = &func;
	void* ptr_void = NULL;

	// printing sizes
	cout << "\nSize of Integer Pointer (bytes)    : " << sizeof(ptr_int);

	cout << "\nSize of Character Pointer (bytes)  : " << sizeof(ptr_char);

	cout << "\nSize of Structure Pointer (bytes)  : " << sizeof(ptr_str);

	cout << "\nSize of Function Pointer (bytes)   : " << sizeof(ptr_func);

	cout << "\nSize of NULL Void Pointer (bytes)  : " << sizeof(ptr_void);

	cout << "\n\n";
}


//int main()
//{
//	Size_Of_Pointer();
//
//	return 0;
//}
