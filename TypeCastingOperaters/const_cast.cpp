#include <iostream> 
using namespace std;

//1. Change mamber variable value using const function
class student
{
private:
	int roll;
public:
	// constructor 
	student(int r) :roll(r) {}

	// A const function that changes roll with the help of const_cast 
	void fun() const
	{
		(const_cast <student*> (this))->roll = 5;
	}

	int getRoll() { return roll; }
};

void const_cast_ChangeMemberInConstFunction(void)
{
	student s(3);
	cout << "Old roll number: " << s.getRoll() << endl;

	s.fun();
	cout << "New roll number: " << s.getRoll() << endl;
}

//2. const_cast can be used to pass const data to a function that doesn’t receive const.
int fun(int* ptr)
{
	*ptr = *ptr + 10;
	return (*ptr);
}

void const_cast_passConstArgToFunction(void)
{
	const int val = 10;
	const int* ptr = &val;
	int* ptr1 = const_cast <int*>(ptr);
	cout << fun(ptr1) << endl;
}

//3. It is undefined behavior to modify a value which is initially declared as const.
void const_cast_modifyConstVariable(void)
{
	const int val = 10;	//remove const and check
	const int* ptr = &val;
	int* ptr1 = const_cast <int*>(ptr);
	*ptr1 = 20;
	cout <<"*ptr : "<< * ptr << "\n*ptr1 : " << *ptr1 << "\nval : " << val << endl;
}

//4. It’s safer, casting won’t happen if the type of cast is not same as original object.
void const_cast_safe(void)
{
	int a1 = 40;
	const int* b1 = &a1;
	//char* c1 = const_cast <char*> (b1); // compiler error 
	//*c1 = 'A';
}

//5) const_cast can also be used to cast away const & volatile attribute.
void const_cast_CastAwayConstVolatile(void)
{
	int a1 = 40;
	const volatile int* b1 = &a1;
	cout << "typeid of b1 " << typeid(b1).name() << '\n';
	int* c1 = const_cast <int*> (b1);
	cout << "typeid of c1 " << typeid(c1).name() << '\n';
}


int main() 
{
	//1. used to change non-const class members inside a const member function
	const_cast_ChangeMemberInConstFunction();

	//2. can be used to pass const data to a function that doesn’t receive const.
	const_cast_passConstArgToFunction();

	//3. It is undefined behavior to modify a value which is initially declared as const.
	const_cast_modifyConstVariable();

	//4. It’s safer, casting won’t happen if the type of cast is not same as original object.
	const_cast_safe();

	//5. const_cast can also be used to cast away const & volatile attribute.
	const_cast_CastAwayConstVolatile();

	return 0;
}