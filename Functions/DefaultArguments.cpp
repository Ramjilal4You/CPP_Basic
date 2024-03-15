// CPP Program to demonstrate Default Arguments
#include <iostream>
using namespace std;

// A function with default arguments, it can be called with
// 2 arguments or 3 arguments or 4 arguments.
void DefaultArguments(int x, int y, int z = 0, int w = 0) //assigning default values to z,w as 0
{
	cout << "\nDefaultArguments()\n";
	cout << x << " " << y << " " << z << " " << w << endl;
}

//int main()
//{
//	// Statement 1
//	DefaultArguments(10, 15);
//
//	// Statement 2
//	DefaultArguments(10, 15, 25);
//
//	// Statement 3
//	DefaultArguments(10, 15, 20, 30);
//
//	return 0;
//}
