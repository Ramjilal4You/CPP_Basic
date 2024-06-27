// C++ program to describe Variadic function

#include <stdarg.h>
#include <iostream>

using namespace std;

// Variadic function to Print numbers
void PrintNumbers(int k, int n1, ...){
	va_list ptr;  // Declaring pointer to the argument list

	va_start(ptr, n1);  // Initializing argument to the list pointer

	cout << k << " : " << n1 << " ";
	for (int i = 1; i < k; i++){
		cout << va_arg(ptr, int) << " "; // return current variable and pointing to next one
	}
	va_end(ptr);  // Ending argument list traversal

	cout << "\n\n";
}

void PrintChars(int k, char c1, ...) {
	va_list ptr;

	va_start(ptr, c1);

	cout << k << " : " << c1 << " ";
	for (int i = 1;i < k;i++)
		cout << va_arg(ptr, char) << " ";
	
	cout << "\n\n";
}

void PrintDouble(int k, double d1, ...) {
	va_list ptr;
	va_start(ptr, d1);

	cout << k << " : " << d1 << " ";
	for (int i = 1;i < k;i++) {
		cout << va_arg(ptr, double) << " ";
	}
	cout << "\n\n";
}

//int main()
//{
//	//fun_name(5, 6, 7);
//
//	printf("Variadic functions:\n");
//
//	// Variable number of arguments
//	PrintNumbers(3, 1, 2, 3);
//	PrintNumbers(5, 1, 2, 3, 4, 5);
//
//	PrintDouble(3, 1.0, 2.0, 3.0);
//	PrintDouble(5, 1.0, 2.0, 3.0, 4.0, 5.0);
//
//	PrintChars(3, 'a', 'b', 'c');
//	PrintChars(5, 'a', 'b', 'c', 'd', 'e');
//
//	printf("\n");
//
//	return 0;
//}
