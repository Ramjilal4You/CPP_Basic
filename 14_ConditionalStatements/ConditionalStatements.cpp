// C++ program to illustrate conditional statements
#include <iostream>
using namespace std;

void if_example(int i) 
{
	cout << "\nif_example() : \n";
	if (i > 5) 
	{
		cout << "In if block : i = " << i << ", is greater than 5\n";
	}

	cout << "After if block\n";
}

//  If statement
void if_else_example(int i)
{
	cout << "\nif_else_example() : \n";
	if (i > 5) 
	{
		cout << "In if block : i = " << i << ", is greater than 5\n";
	}
	else 
	{
		cout << "In else block : i = " << i << ", is smaller than 5\n";
	}
}

//  nested-if statement
void nested_if_example(int i)
{
	cout << "\nnested_if_example() : \n";
	if (i == 6) {
		// First if statement
		if (i > 5)
			cout << "In if block : i = " << i << ", is greater than 5\n";

		// Nested - if statement Will only be executed if statement above is true
		if (i > 3)
			cout << "In if block : i = " << i << ", is greater than 3 too\n";
		else
			cout << "In else block : i = " << i << ", is smaller than 3\n";
	}
}

// if else if statement
void if_else_if_example(int i)
{
	cout << "\nif_else_if_example() : \n";
	if (i == 10)
		cout << "In if block : i = " << i << ", is 10\n";
	else if (i == 15)
		cout << "In else if block : i = " << i << ", is 15\n";
	else if (i == 20)
		cout << "In else if block : i = " << i << ", is 20\n";
	else
		cout << "i is not present\n";
}

// the use of switch statement
// variable to be used in switch statement
void switch_example(int var)
{
	cout << "\nswitch_example() : \n";
	// declaring switch cases
	switch (var) {
	case 1:
		cout << "Case 1 is executed\n";
		break;
	case 2:
		cout << "Case 2 is executed\n";
		break;
	case 3:
		cout << "Case 3 is executed\n";
		break;
	case 4:
		cout << "Case 4 is executed\n";
		break;
	case 5:
		cout << "Case 5 is executed\n";
		break;
	default:
		cout << "Default Case is executed\n";
	}
}


//int main()
//{
//	if_example(6);
//	if_else_example(6);
//	nested_if_example(6);
//	if_else_if_example(6);
//	switch_example(6);
//	switch_example(4);
//
//	return 0;
//}
