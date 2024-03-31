// calculate length of an array
#include <iostream>
using namespace std;


void ArrayLengthExample() {
	int Arr[] = { 1, 2, 3, 4, 5 };

	// using sizeof() operator
	int length = sizeof(Arr) / sizeof(Arr[3]);

	cout<<"using sizeof : Array Length : "<< length<<"\n\n";

	// using pointer arithmetic
	length = * ( &Arr + 1) - Arr;

	cout<<"using pointer arithmetic : Array Length : "<< length<<"\n\n";

	// using loop
	length = 0;
	for(int i: Arr){ length++; }

	cout<<"using loop : Array Length : "<< length<<"\n\n";
}


int main()
{
	ArrayLengthExample();
	
	return 0;
}
