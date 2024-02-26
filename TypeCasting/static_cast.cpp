/*** static_cast ***/
/*
* The most commonly used casting operator in C++.
* It performs compile - time type conversion.
* Mainly used for explicit conversions that are considered safe by the compiler.
* Used to convert between related types, 
	- such as numeric types or 
	- pointers in the same inheritance hierarchy.
* Provide both upcasting and down casting.
* Base class must be accessible to use static_cast.
* Allows casting from any pointer type to void pointer and vice versa.
*
*/

// C++ program to illustrate the static_cast 
#include <iostream> 
#include <typeinfo> 
#include <string>

using namespace std;

void static_cast1() 
{
	int num = 65;

	char ch = static_cast<char>(num);	// converting int to char 
	cout << ch << endl;

	// printing data types
	cout << typeid(num).name() << endl;
	cout << typeid(static_cast<char>(num)).name() << endl;	// typecasting 
	cout << typeid(ch).name() << endl;	// printing char type 
}

// C++ Program to demonstrate static_cast char* to int*
void static_cast_charPtrtoIntPtr()
{
	int a = 10;
	char c = 'a';

	int* q = (int*)&c;	//Allowed
	//int* p = static_cast<int*>(&c);	// Not allowed
}

// C++ Program to cast class object to string object
class integer {
	int x;

public:
	// constructor
	integer(int x_in = 0)
		: x{ x_in }
	{
		cout << "Constructor Called" << endl;
	}

	//user defined conversion operator to string type
	operator string()
	{
		cout << "Conversion Operator Called" << endl;
		return to_string(x);
	}
};

// Driver code
void static_cast_conversion_operator()
{
	integer obj(3);
	string str = (string)obj;
	obj = 20;	//(integer)20;

	// using static_cast for typecasting
	string str2 = static_cast<string>(obj);
	obj = static_cast<integer>(30);
}

// C++ Program to demonstrate static_cast in inheritance
class Base
{};
class Derived : public Base
{};

void static_cast_Up_DownCasting()
{
	Derived d1;
	Base* b1 = (Base*)(&d1);	// upcasting allowed	
	Base* b2 = static_cast<Base*>(&d1);	// upcasting using static_cast

	Base b3;
	Derived* d3 = (Derived*)(&b3);	// down casting allowed	
	Derived* d4 = static_cast<Derived*>(&b3);	// down casting using static_cast

}

// C++ program to demonstrate static_cast to cast 'to and from' the void pointer
void static_cast_to_and_fromVoidPtr()
{
	int i = 10;
	void* v = static_cast<void*>(&i); //int ptr to void ptr
	int* ip = static_cast<int*>(v);	//void ptr to int ptr
	cout << *ip;
}

//int main()
//{
//	static_cast1();
////	static_cast_charPtrtoIntPtr();
////	static_cast_conversion_operator();
////	static_cast_Up_DownCasting();
////	static_cast_to_and_fromVoidPtr();
////
//	return 0;
//}
