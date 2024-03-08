// CPP Program to demonstrate Default Arguments
#include <iostream>
using namespace std;

// A function with default arguments, it can be called with
// 2 arguments or 3 arguments or 4 arguments.
int sum(int x, int y, int z = 0, int w = 0) //assigning default values to z,w as 0
{
	cout << "sum(int x, int y, int z = 0, int w = 0)\n";
	return (x + y + z + w);
}

/* Function overloading in Default Arguments.  
Statement 1 : Error 'sum': ambiguous call to overloaded function.
*/
int sum(int x, int y, float z = 0, float w = 0)
{
	cout << "sum(int x, int y, float z = 0, float w = 0)\n";
	return (x + y + z + w);
}

//int main()
//{
//	// Statement 1
//	//cout << sum(10, 15) << endl; //will give an error
//
//	// Statement 2
//	cout << sum(10, 15, 25) << endl;
//
//	// Statement 3
//	cout << sum(10, 15, 20, 30) << endl;
//
//	// Statement 4
//	cout << sum(10, 15, 25.0f, 30.0f) << endl;
//	return 0;
//}
