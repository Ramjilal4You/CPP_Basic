// A C++ program to demonstrate static scoping.
#include<iostream>
using namespace std;

int x = 10;

// Called by g()
int f(){
	//int x = 15;
	{
		return x;
	}
	return x;
}

// g() has its own variable named as x and calls f()
int g(){
	int x = 20;
	return f();
}

//int main()
//{
//	cout << g() << endl;
//	
//	return 0;
//}
