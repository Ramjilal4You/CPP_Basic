// C++ program to demonstrate the modifiers
#include <iostream>
using namespace std;

void TypeModifiers()
{
	//signed modifier
	cout << "Size of signed int : " << sizeof(signed int) <<" bytes" << endl;
	cout << "Size of signed char : " << sizeof(signed char) <<" bytes" << endl;

	//unsigned modifier
	cout << "Size of unsigned int : " << sizeof(unsigned int) <<" bytes" << endl;
	cout << "Size of unsigned char : " << sizeof(unsigned char) <<" bytes" << endl;

	//short modifier
	cout << "Size of short int : " << sizeof(short int) <<" bytes" << endl;

	//long modifier
	cout << "Size of long int : " <<sizeof(long int) <<" bytes" << endl;
	cout << "Size of long double : " <<sizeof(long double) <<" bytes" << endl;

	//signed long modifier
	cout << "Size of signed long int : " <<sizeof(signed long int) <<" bytes" << endl;
	cout << "Size of unsigned short int : " <<sizeof(unsigned short int) <<" bytes" << endl;
	
	//long long modifier
	cout << "Size of long long int : " <<sizeof(long long int) <<" bytes" << endl;
}

//int main() {
//	TypeModifiers();
//	return 0;
//}
