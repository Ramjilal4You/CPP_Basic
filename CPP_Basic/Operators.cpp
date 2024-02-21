// C++ Program to Demonstrate the working concept of Operators
#include <iostream>
using namespace std;

void OperatorsInCPP()
{

	int a = 10, b = 5;
	cout<<"The value of a is "<< a<<endl;
	cout<<"The value of b is "<< b<<endl;

	// Unary operators
	cout<<"Following are the Unary operators in C++"<<endl;
	cout << "The value of a++ is " << a++ << endl;  // First print (a) and then increment it by 1
	cout << "The value of a-- is " << a-- << endl;  // First print (a+1) and then decrease it by 1
	cout << "The value of ++a is " << ++a << endl;  // Increment (a) by (a+1) and then print
	cout << "The value of --a is " << --a << endl;  // Decrement (a+1) by (a) and then print

	cout << "\nThe value of sizeof(int) operator is:%lu" << sizeof(int) << endl;

	// Arithmetic operators
	cout<<"\nFollowing are the Arithmetic operators in C++"<<endl;
	cout<<"The value of a + b is "<< a + b<<endl;
	cout<<"The value of a - b is "<< a - b<<endl;

	cout<<"The value of a * b is "<< a * b<<endl;
	cout<<"The value of a / b is "<< a / b<<endl;
	cout<<"The value of a % b is "<< a % b<<endl;


	// Comparison/Relational operators
	// Output of all these comparison operators will be (1) if it is true and (0) if it is false
	cout<<"\nFollowing are the comparison operators in C++"<<endl;
	cout<<"The value of a == b is "<< (a == b)<<endl;
	cout<<"The value of a != b is "<< (a != b)<<endl;
	cout<<"The value of a >= b is "<< (a >= b)<<endl;
	cout<<"The value of a <= b is "<< (a <= b)<<endl;
	cout<<"The value of a > b is "<< (a > b)<<endl;
	cout<<"The value of a < b is "<< (a < b)<<endl;

	// Logical operators
	cout<<"\nFollowing are the logical operators in C++"<<endl;
	cout<<"The value of this logical and operator ((a==b) && (a<b)) is "<< ((a == b) && (a < b))<<endl;
	cout<<"The value of this logical or operator ((a==b) || (a<b)) is "<< ((a == b) || (a < b))<<endl;
	cout<<"The value of this logical not operator (!(a==b)) is "<< (!(a == b))<<endl;

	// Bitwise operators
	// a = 1(00000001), b = 2(00000010)
	a = 1, b = 2;
	cout<<"\nFollowing are the Bitwise operators in C++"<<endl;
	cout<<"The value of a & b is "<< (a & b)<<endl;  // The result is 00000000
	cout<<"The value of a|b is "<< (a | b)<<endl;    // The result is 00000011
	cout<<"The value of a^b is "<< (a ^ b)<<endl;    // The result is 00000011
	cout<<"The value of a<<1 is "<< (a << 1)<<endl;    // The result is 00000010
	cout<<"The value of a>>1 is "<< (a >> 1)<<endl;    // The result is 00000000

	// Assignment Operators --> used to assign values to variables
	int x = 3, y = 9; char d = 'd';

	// Conditional/Ternary operator
	cout<<"\nFollowing are the Conditional operators in C++"<<endl;
	cout<<"The value of this Conditional operator (a>b?a:b) is "<< (a > b ? a : b)<<endl;

}

// C++ Program to illustrate the precedence and associativity of the operators in an expression
//void precedence_and_associativity() {
//	int exp = 100 + 200 / 10 - 3 * 10;
//	cout<<"\n100 + 200 / 10 - 3 * 10 = "<< exp<<endl; // Ans. is 90
//}
//int main() {
//	OperatorsInCPP();
//
//	return 0;
//}