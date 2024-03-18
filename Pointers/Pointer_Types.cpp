// C++ program to illustrate Pointers
/*
* 2. Types of pointers? -> Single-Level & Multi-Level
*	- Integer, Array, NULL, Void, Wild, Dangling, File, Constant, Double Pointer
* 
*/
#include <iostream>
//#include <stdlib.h>
#include <algorithm>
using namespace std;

void PointerTypes() 
{
	//1. Integer Pointers
	int val_int = 10;
	int* ptr_int = &val_int;	//need int ptr, Because pointer can only store the address of same type.
	//char* ptr_char = &val_int;	// Error 
	//double* ptr_double = &val_int;	// Error 
	cout << "1. Integer Pointers = " << *ptr_int << "\n\n";



	//2. Array Pointer
	int arr[] = { 1,2,3,4,5 };
	int* ptr_arr = arr; //arr, &arr, &arr[0]; gives same base address of an array
	cout << "2. Array Pointer = ";
	for_each(ptr_arr, ptr_arr + 5, [](int i) {cout << i << " ";});
	cout << "\n\n";



	//3. NULL Pointer
	int* null_ptr = NULL;
	cout << "3. NULL Pointer = (Undefined Behavior)\n\n";
	//cout << *null_ptr; //warning C6011 : Deferencing NULL pointrt 'null_ptr'.



	//4. Void Pointer(generic pointers)
	void* ptr_void = NULL;
	cout << "4. Void Pointer = (Can not dereference void ptr)" << "\n\n";
	//cout<<*ptr_void;	//error
	


	//5. Wild Pointers
	int* ptr_wild;  //un-initialized ptr
	cout << "5. Wild Pointer = (you might get compiler error)" << "\n\n";
	//cout << *ptr_wild;  //error C4700: uninitialized local variable 'ptr_wild' used



	//6. Dangling Pointers 
	int* ptr_dang = new int(10);
	delete ptr_dang; //now ptr is dangling pointer
	ptr_dang = NULL; // removing Dangling Pointer
	cout << "6. Dangling Pointer = (Undefined Behavior)\n\n";
	//cout << *ptr_dang;	// C6001 Using Uninitialized memory 'ptr_dang'.



	//7. Pointers with constants
	
	int val1 = 10;
	int val2 = 20;

	//7a. Constant Pointers  
	int * const const_ptr = &val1;
	//const_ptr = &val2;   //this will give an error
	cout << "7a. Constant Pointer = " << *const_ptr << "\n\n";

	//7b. Pointer to Constant
	const int* ptr_to_const = &val1;
	//*ptr_to_const = 15;	 //this will give an error
	cout << "7b. Pointer to Constant = " << *ptr_to_const << "\n\n";

}

// Void Pointer 
void Use_VoidPointer_IncreaseByOne(void* data, int ptrsize)
{
	if (ptrsize == sizeof(char)) {
		char* ptrchar;

		// Typecast data to a char pointer 
		ptrchar = (char*)data;

		// Increase the char stored at *ptrchar by 1 
		(*ptrchar)++;
		cout << "*data points to a char & Increase by 1\n";
	}
	else if (ptrsize == sizeof(int)) {
		int* ptrint;

		// Typecast data to a int pointer 
		ptrint = (int*)data;

		// Increase the int stored at *ptrchar by 1 
		(*ptrint)++;
		cout << "*data points to an int & Increase by 1\n";
	}
}

void VoidPointer()
{
	char ch = 'x';	// Declare a character 

	int num = 10;	// Declare an integer 

	// Call increase function using a char and int address respectively 
	cout << "The Initial value of ch is: " << ch << "\n";
	Use_VoidPointer_IncreaseByOne(&ch, sizeof(ch));						 
	cout << "The Updated value of ch is: " << ch << "\n\n";
													 
	cout << "The Initial value of num is: " << num << "\n";
	Use_VoidPointer_IncreaseByOne(&num, sizeof(num));
	cout << "The Updated value of num is: " << num << "\n\n";
}


// Dangling Pointer
/*
* 1. De-allocation of Memory
	 When a memory pointed by a pointer is deallocated the pointer becomes a dangling pointer.
* 2. Function Call 
     When the function returns a pointer to that local(non static) variable.
* 3. Variable Goes Out of Scope
     When a variable goes out of scope the pointer pointing to that variable becomes a dangling pointer.
*/
int* fun()
{
	// x is local variable and goes out of scope after an execution of fun() is over.
	static int x = 5; //try with static

	return &x;
}

// Dangling pointer
void DanglingPointer()
{
	/*** 1. De - allocation of Memory ***/
	int* ptr1 = new int;

	// After below free call, ptr becomes a dangling pointer
	delete ptr1;
	cout << "Memory freed\n";
	cout << "\n1. DanglingPointer : (Geeting crash)\n";
	cout << *ptr1 << endl;	//runtime error

	// removing Dangling Pointer
	ptr1 = NULL;	// warning C6011 : Deferencing NULL pointrt 'ptr1'.
	

	//--------------------
	/*** 2. Function Call ***/
	int* ptr2 = fun();

	// p points to something which is not valid anymore
	//cout << "\n2. DanglingPointer : " << *ptr2 << endl;

	//--------------------
	/*** 3. Variable Goes Out of Scope ***/
	int* ptr3;
	// creating a block
	{
		int a = 10;
		ptr3 = &a;
	}
	
	// ptr here becomes dangling pointer
	cout << "\n3. DanglingPointer : " << *ptr3 << endl;
}

int main()
{
	//PointerTypes();

	//VoidPointer();

	DanglingPointer();

	return 0;
}
