// C++ Program to illustrate the macro
#include <iostream>
using namespace std;

#define LIMIT 5	// macro definition
#define AREA(l, b) (l * b)	// macro with parameter or function like macros

//Macro definition for existing macro
#define YOUTUBE FOLLOWERS
#define FOLLOWERS 100

// Multi-line Macro definition
#define ELE 1, \
			2, \
			3

// print a variable name in C++ 
// Stringizing Operator : Basically # directive converts its argument in a string.
#define getName(var) #var 

// C++ program to illustrate (##) operator 
// Macro definition using the Token-pasting operator 
#define fun(a, b) a##b 

int main()
{
	for (int i = 1; i <= LIMIT; i++) {
		cout<<i<<" ";
	}
	cout<<"\n";


	//Example - macro with parameter or function like macros
	int area = AREA(10, 5);
	cout<<"\nArea of rectangle is: "<< area<<"\n";


   cout<<"\nRamjilal4you have "<<YOUTUBE<<"k followers on Youtube\n";


	int arr[] = { ELE };	// Array arr[] with elements defined in macros
	cout<<"\nElements of Array are: "<<"\n";
	for (int i = 0; i < 3; i++) {
		cout<< arr[i]<<" ";
	}

	// print a variable name in C 
	// Stringizing Operator : Basically # directive converts its argument in a string.
	int myVar;
	cout<<"\n\nVariable name :  " << getName(myVar)<<"\n";

	

	// Printing the concatenated value of x and y 
	int xy = 30;
	cout<<"\nconcat xy :  "<< fun(x, y)<<"\n"; // concat(x, y) replaced by x##y --> xy

	
	// Pre defined macros
	cout<<"\nCurrent File : "<< __FILE__<<"\n";
	cout<<"Current Date : "<< __DATE__<<"\n";
	cout<<"Current Time : "<< __TIME__<<"\n";
	cout<<"Line Number : "<< __LINE__<<"\n";

	cout<<"\n\n\n";

	return 0;
}

