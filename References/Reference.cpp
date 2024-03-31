// C++ Program to demonstrate use of references
/*
* What is reference?
* Declaration, definition & initialization?
*/
#include <iostream>
using namespace std;

int main()
{
	int num = 10;

	// ref is a reference to num.
	int& ref = num;   //it must be initialized
    //int& ref=NULL; //Error, not allowed

	// Value of num is now changed to 20
	ref = 20;
	cout << "num = " << num << '\n';
	
	cout << "ref = " << ref << '\n';

	return 0;
}
