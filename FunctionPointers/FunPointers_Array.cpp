/*
* Array of function pointers 
*/

#include <iostream>
using namespace std;

void add(int a, int b)
{
	cout<<"add() : "<< a <<" + "<< b << " = "<< a + b << endl;
}
void subtract(int a, int b)
{
	cout<<"subtract() : "<< a <<" - "<< b << " = "<< a - b << endl;
}
void multiply(int a, int b)
{
	cout<<"multiply() : "<< a <<" * "<< b << " = "<< a * b << endl;
}

int main()
{
	int opt, a = 15, b = 10;

	cout<< "\na is "<< a <<"\nb is "<< b << endl;

	do
	{
		cout<< "\n\n0 for add, 1 for subtract, 2 for multiply\nEnter your Choice : ";
		
		cin>>opt;	//take input

		cout<<"Entered Value is "<<opt<<endl;
		
		// fun_ptr_arr is an array of function pointers 
		void ( * fun_ptr_arr [] ) (int, int) = { add, subtract, multiply };

		if (opt > 2){ cout<<"Wrong options entered, Exiting...\n"; break; }

		(*fun_ptr_arr[opt])(a, b);
	}
	while(1);

	cout<<"\n\n";
	return 0;
}
