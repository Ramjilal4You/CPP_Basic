// calculate length of an array
#include <iostream>
using namespace std;


void ArrayLengthExample() {
	int Arr[] = { 1, 2, 3, 4, 5 };

	//1. using sizeof() operator
	int length = sizeof(Arr) / sizeof(Arr[3]);

	cout<<"using sizeof : Array Length : "<< length<<"\n\n";

	//2. using pointer arithmetic
	int Arr1[5] = { 1, 2, 3, 4, 5 };
	int (*ptr_arr)[5] = &Arr1;

	length = * ( ptr_arr + 1) - Arr1;

	cout<<"using pointer arithmetic : Array Length : "<< length<<"\n\n";

	//3. using loop
	length = 0;
	for(int i: Arr){ length++; }

	cout<<"using loop : Array Length : "<< length<<"\n\n";
}


int main()
{
	ArrayLengthExample();
	
	return 0;
}
