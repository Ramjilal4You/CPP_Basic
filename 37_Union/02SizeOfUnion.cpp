// C++ Program to find the size of the union
#include <iostream>

using namespace std;

// declaring multiple unions
union test1 {
	int x=4;
	int y;
};

union test2 {
	double x;
	char y;
} Test2;

union test3 {
	int arr[10];
	char y;
} Test3;


int main()
{
	test1 Test1;
	cout<<"\n\nTest1.x : "<<Test1.x<<" Test1.y : "<<Test1.y<<"\n\n\n";

	// finding size using sizeof() operator
	cout<<"Sizeof test1: "<< sizeof(Test1)<<"\n";
	cout<<"Sizeof test2: "<< sizeof(Test2)<<"\n";
	cout<<"Sizeof test3: "<< sizeof(Test3)<<"\n\n\n\n\n\n\n\n\n";
	return 0;
}
