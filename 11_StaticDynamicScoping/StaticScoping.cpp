/*** static scoping. ***/
/*
* Static scoping is also called lexical scoping.
* Compiler first searches in the current block, -> global variables -> successively smaller scopes.
  Example. C, C++, and Java.
*/
#include<iostream>
using namespace std;

int x = 10;

// Called by g()
int f()
{
	return x;
}

// g() has its own variable named as x and calls f()
int g()
{
	int x = 20;
	return f();
}

//int main()
//{
//	cout << g() << endl;
//	
//	return 0;
//}
