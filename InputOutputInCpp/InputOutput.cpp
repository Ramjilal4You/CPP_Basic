/*** Input & Output ***/
#include <iostream>

using namespace std;

// C++ program to illustrate the take 
// multiple input 
#include <iostream> 
using namespace std;

void cin_cout_Example()
{
	string name;
	int age;

	cout << "Enter Name & Age\n";	 
	cin >> name >> age;	// Take multiple input using cin

	// Print output 
	cout << "Entered Values are\n";
	cout << "Name : " << name << endl << "Age : " << age << endl;
}

// C++ program to illustrate the use of cin.getline(char *buffer, int N):
/*
* It reads a stream of characters of length N into the string buffer, 
* It stops when it has read(N – 1) characters or it finds the end of the file 
  or newline character(\n).
*/
void cin_getline()
{
	char name[6];

	cout << "Enter Name\n";
	// Reads stream of 3 characters 
	cin.getline(name, 4);

	// Print output 
	cout << name << endl;
}

// cin.get(char& ch) : It reads an input character and stores it in a variable.
// cout.put(char &ch) : Print the character stored in character ch.
void cin_get_cout_put()
{
	char ch;
	cin.get(ch);	// Read the character ch

	cout.put(ch);	// Print the character ch
	cout << endl;
}

// cin.read(char *buffer, int N) : Reads a stream of characters of length N.
// It does not add null character ('\0') at end of the string.

//cout.write(char *str, int n): Print the first N character reading from str.
void cin_read_cout_write()
{
	char name[6];
	//name[5] = '\0';	//Need to add manually

	cin.read(name, 6);	// Reads stream of characters 

	cout.write(name, 6);	// Print first 6 characters
	cout << endl;
}

// C++ program to illustrate the use of cin.ignore() 
/*
* It ignores or clears one or more characters from the input buffer.
*/

#include <ios> // used to get stream size 
#include <limits> // used to get numeric limits 

void cin_ignore()
{
	int x;
	char str[80];
	cout << "Enter a number and string:\n";
	cin >> x;

	// clear buffer before taking new line 
	//cin.ignore(numeric_limits<streamsize>::max(), '\n'); //comment it & Uncomment it.

	cin.getline(str, 80);	// Input a string 
	cout << "You have entered:\n";
	cout << x << endl;
	cout << str << endl;
}

// cout.precision()
void cout_precision()
{
	double pi = 3.14159783;

	cout.precision(3);	// Set precision to 3 : output 3.14
		
	cout << pi << endl;	// Print pi
		
	cout.precision(5);	// Set precision to 5 : output 3.1415
	
	cout << pi << endl;	// Print pi

}


//int main()
//{
//	//cin_cout_Example();
//	//cin_getline();
//	//cin_get_cout_put();
//	//cin_read_cout_write();
//	//cin_ignore();
//	//cout_precision();
//
//	cerr << "Hello I'm cerr!\n";	// Print "Welcome to GfG" in the error window 
//	clog << "Hello I'm clog!\n";	// Print "Welcome to GfG" in the output window 
//
//	return 0;
//}
