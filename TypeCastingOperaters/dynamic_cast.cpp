// C++ program demonstrate if there is no virtual function used in the Base class
#include <iostream>
using namespace std;

// Base class declaration
class Base {
	virtual void print()
	{
		cout << "Base" << endl;
	}
};

// Derived Class 1 declaration
class Derived1 : public Base {
	void print()
	{
		cout << "Derived1" << endl;
	}
};

// Derived class 2 declaration
class Derived2 : public Base {
	void print()
	{
		cout << "Derived2" << endl;
	}
};

void dynamic_cast_Up_downCasting()
{
	Derived1 d1;

	// Base class pointer hold Derived1 class object
	Base* bp = dynamic_cast<Base*>(&d1);	//Up casting allowed by default

	// Dynamic casting
	Derived2* dp2 = dynamic_cast<Derived2*>(bp);
	if (dp2 == nullptr)
		cout << "null" << endl;

	// Dynamic casting
	Derived1* dp1 = dynamic_cast<Derived1*>(bp);
	if (dp1 != nullptr)
		cout << "not null" << endl;
}


//int main() {
//	dynamic_cast_Up_downCasting();
//
//	return 0;
//}
