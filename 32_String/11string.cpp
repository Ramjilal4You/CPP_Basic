// C style string

#include <iostream>
#include <string.h>	//strlen
using namespace std;

void string_example() {
	// declare and initialize string
	char str1[] = "Hello Ram1";
	char str2[11] = "Hello Ram2";
	char str3[11] = { 'H','e','l','l','o',' ','R','a','m','3','\0' };
	char str4[] = { 'H','e','l','l','o',' ','R','a','m','4','\0' };

	// print string
	cout<< str1 <<endl;
	cout<< str2 <<endl;
	cout<< str3 <<endl;
	cout<< str4 <<endl;

	// sizeof string
	cout<< "\nsize of str1 : " << sizeof(str1);
	cout<< "\nsize of str2 : " << sizeof(str2);
	cout<< "\nsize of str3 : " << sizeof(str3);
	cout<< "\nsize of str4 : " << sizeof(str4);

	cout<<endl;

	// displaying the length of string
	cout<< "\nLength of string str1 is " << strlen(str1);
	cout<< "\nLength of string str2 is " << strlen(str2);
	cout<< "\nLength of string str3 is " << strlen(str3);
	cout<< "\nLength of string str4 is " << strlen(str4);

	cout<<"\n\n";
}

// read string from user
void input_output_string() {
	char str[10];  // declaring string

	cout<< "\nEnter string upto 9 character : ";
	
	cin >> str;  // reading string

	cout<<"Entered String is : " << str;  // print string
}

// how to pass string to functions
void printStr(char str[]) { 
	cout << "\n\nprintStr(char str[]) : " << str; 
}

// print string using Pointers
void string_using_pointer()
{
	cout << "\n\nstring_using_pointer() : ";

	char str[20] = "Ramjilal4You";

	// Pointer variable which stores the starting address of the character array str
	char* ptr = str;  //&str[0] 
	
	int count = 0;

	// While loop will run till the character value is not equal to null character
	while (*ptr != '\0') {
		cout<< *ptr;
		count++;
		// moving pointer to the next character.
		ptr++; //ptr = ptr + 1; sizeof(type)*n
	}

	cout<<"String size : "<<count;
	cout<<"\n\n";
}


int main()
{
	//string_example();

	input_output_string();

	// declare and initialize string
	char str[] = "Ramjilal4You";
	printStr(str);  // print string by passing string to a different function

	string_using_pointer();

	return 0;
}
