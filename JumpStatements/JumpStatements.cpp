// Jump Statements - break, continue, goto, return statements
#include <iostream>
using namespace std;

// continue statement : Search number
void continue_SkipNumber6() {
	cout << "\ncontinue_SkipNumber()\n";
	// loop from 1 to 10
	for (int i = 1; i <= 10; i++) {
		// If i is equals to 6, continue to next iteration without printing
		if (i == 6)
			continue;

		cout << i << " ";   //Error : otherwise print the value of i
	}
	//continue; //can not use outside the loop;
	cout << endl;
}

// break statement
void break_findElement(){
	cout << "\nbreak_findElement()\n";
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int size = 6;  // no of elements
	int key = 3;  // key to be searched

	// loop to traverse array and search for key
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			cout << "Element found at position(0 index based arr): " << i << endl;
			break;
		}
	}

	//break; //Error : can only be used within a loop or switch
}

// break statement
void break_findElement2() {
	cout << "\nbreak_findElement2()\n";

	// loop to traverse array and search for key
	for (int i = 1; i < 5; i++) {
		for (int j = 1;j < 5;j++) {
			if (i == j) {
				cout << "(break)";
				break;
			}
			cout << i * j << " ";
		}
		cout << endl;
	}

	//break; //Error : can only be used within a loop or switch
}

// goto statement : Print numbers from 1 to 5
/*Note: The goto statement makes it difficult to understand the flow of 
the program therefore it is avoided to use it in a program.*/
void goto_printNumbers(){
	cout << "\ngoto_printNumbers()\n";
	int n = 1;
	
	label1:
	cout << n << " ";
	n++;
	if (n <= 5)
		goto label1;
}

// return statement
/*Note: The return in void() functions can be used without any return type.*/
int return5_example() {
	cout << "return5_example()\n";
	return 5;
}
void return_example() {
	cout << "\n\nreturn_example()\n";
	cout << "return5 value : " << return5_example() << endl;
	return;
	cout << "After return\n";
}

//int main()
//{
//	continue_SkipNumber6();
//
//	break_findElement();
//	break_findElement2();
//
//	goto_printNumbers();
//
//	return_example();
//	
//	return 0;
//}
