// C++ Program to illustrate the auto storage class variables
#include <iostream>
using namespace std;

void autoStorageClass()
{

	cout << "Demonstrating auto class\n";

	// Declaring an auto variable
	int a = 32;
	float b = 3.2;
	const char* c = "Ramjilal4You";
	char d = 'G';

	// printing the auto variables
	cout << a << " \n";
	cout << b << " \n";
	cout << c << " \n";
	cout << d << " \n";
}

// C++ Program to illustrate the extern storage class
void externStorageClass()
{

    cout << "Demonstrating extern class\n";

    // telling the compiler that the variable x is an extern variable and has been
    // defined elsewhere (above the main function)
    extern int x;

    // printing the extern variables 'x'
    cout << "Value of the variable 'x'"<< "declared, as extern: " << x << "\n";

    // value of extern variable x modified
    x = 2;

    // printing the modified values of extern variables 'x'
    cout << "Modified value of the variable 'x'"<< " declared as extern: \n"<< x;
}
// declaring the variable which is to be made extern
int x;


// C++ program to illustrate the static storage class objects

// Function containing static variables memory is retained during execution
int staticFun()
{
	cout << "For static variables: ";
	static int count = 0;
	count++;
	return count;
}

// Function containing non-static variables memory is destroyed
int nonStaticFun()
{
	cout << "For Non-Static variables: ";

	int count = 0;
	count++;
	return count;
}

void staticStorageClass()
{
	// Calling the static parts
	cout << staticFun() << "\n";
	cout << staticFun() << "\n";

	// Calling the non-static parts
	cout << nonStaticFun() << "\n";
	cout << nonStaticFun() << "\n";
}

// C++ Program to illustrate the use of register variables
void registerStorageClass()
{
	cout << "Demonstrating register class\n";

	// declaring a register variable
	register char b = 'G';
	char* ptr = &b;
	// printing the register variable 'b'
	cout << "Value of the variable 'b'"<< " declared as register: " << b << "\n";
}

// C++ program to illustrate the use of mutalbe storage class specifiers
class Test {
public:
	int x;
	mutable int y;	// defining mutable variable y now this can be modified

	Test()
	{
		x = 4;
		y = 10;
	}
};

void mutableStorageClass()
{
	// t1 is set to constant
	const Test t1;

	// trying to change the value
	t1.y = 20;
	cout << t1.y;

	// Uncommenting below lines will throw error
	//t1.x = 8;
	//cout << t1.x;
}

// C++ program to illustrate the use of thread_local storage sprecifier
#include <thread>
// defining thread local variable
thread_local int var = 10;

void thread_localStorageClass()
{
	// thread 1
	thread th1([]() {cout << "Thread 1 var Value: " << (var = var + 18) << '\n';});

	// thread 2
	thread th2([]() {cout << "Thread 2 var Value: " << (var += 7) << '\n';});

	// thread 3
	thread th3([]() {cout << "Thread 3 var Value: " << (var += 13) << '\n';});

	th1.join();
	th2.join();
	th3.join();
}

//int main()
//{
//	//autoStorageClass();	// To demonstrate auto Storage Class
//	//externStorageClass();	// To demonstrate extern Storage Class
//	//staticStorageClass();	// To demonstrate static Storage Class
//	registerStorageClass();	// To demonstrate register Storage Class
//	//mutableStorageClass();	// To demonstrate mutable Storage Class
//	//thread_localStorageClass();	// To demonstrate thread_local Storage Class
//
//	return 0;
//}
