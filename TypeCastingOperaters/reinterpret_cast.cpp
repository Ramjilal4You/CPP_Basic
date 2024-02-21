// C++ program to illustrate the reinterpret_cast 
#include <iostream> 
using namespace std;

//1. reinterpret_cast example
void reinterpret_cast_example()
{
	int number = 10;
	// Store the address of number in numberPointer 
	int* numberPointer = &number;

	// Reinterpreting the pointer as a char pointer 
	char* charPointer = reinterpret_cast<char*>(numberPointer);

	// Printing the memory addresses and values 
	cout << "Integer Address: " << numberPointer << endl;
	cout << "Char Address: " << reinterpret_cast<void*>(charPointer) << endl;
}

//2. code to illustrate reinterpret_cast using structure
struct mystruct {	// creating structure mystruct
	int x;
	int y;
	char c;
	bool b;
};

void reinterpret_cast_bitBybitExample()
{
	mystruct s;

	// Assigning values
	s.x = 5;
	s.y = 10;
	s.c = 'a';
	s.b = true;

	// data type must be same during casting as that of original

	// converting the pointer of 's' to, pointer of int type in 'p'.
	int* p = reinterpret_cast<int*>(&s);

	cout << "size of structure is : " << sizeof(s) << endl;

	cout << *p << endl;	// printing the value currently pointed by *p

	p++;	// incrementing the pointer by 1

	cout << *p << endl;	// printing the next integer value

	p++;	// incrementing the pointer by 1

	// we are casting back char * pointed by p using char *ch.
	char* ch = reinterpret_cast<char*>(p);

	cout << *ch << endl;	// printing the character value pointed by (*ch)

	ch++;	// incrementing the pointer by 1

	/* since, (*ch) now points to boolean value,so it is required to access the 
	value using same type conversion. so, we have used data type of *bp to be bool. */

	bool* bp = reinterpret_cast<bool*>(ch);
	cout << *bp << endl;
}

//3. CPP code to illustrate the pointer reinterpret
class A {
public:
	void fun_a()
	{
		cout << " In class A\n";
	}
};

class B {
public:
	void fun_b()
	{
		cout << " In class B\n";
	}
};

void reinterpret_cast_PointerReinterpret()
{
	// creating object of class B
	B* x = new B();

	// converting the pointer to object referenced of class B to class A
	A* new_a = reinterpret_cast<A*>(x);

	// accessing the function of class A
	new_a->fun_a();

	B* new_b = reinterpret_cast<B*>(x);
	new_b->fun_b();
}

//int main() {
//	//simple example
//	reinterpret_cast_example();
//
//	// reinterpret_cast using structure
//	reinterpret_cast_bitBybitExample();
//
//	// CPP code to illustrate the pointer reinterpret
//	reinterpret_cast_PointerReinterpret();
//}