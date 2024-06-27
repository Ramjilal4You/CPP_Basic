// C++ style string : std::string

#include <iostream>
#include <cstring> //strlen
#include <string>	//different from <cstring> or <string.h>

#include <limits>   //numeric_limits
#include <ios>      //streamsize
using namespace std;

void string_Initialize() {
	// declare and initialize string
	string str1 = "Hello Ram1";
	string str2{"Hello Ram2"};
    string str3("Hello Ram3");
	string str4 = { 'H','e','l','l','o',' ','R','a','m','4' };
	string str5{ 'H','e','l','l','o',' ','R','a','m','5','\0' };
    string str6(5, 'R');

	// print string
	cout<< str1 <<endl;
	cout<< str2 <<endl;
	cout<< str3 <<endl;
	cout<< str4 <<endl;
    cout<< str5 <<endl;
    cout<< str6 <<endl;

	// sizeof string class
    cout<< "\nsize of string class : " << sizeof(str1);

	cout<<endl;

	// displaying the length of string
	cout<< "\nLength of string str1 is " << str1.length();
	cout<< "\nLength of string str2 is " << str2.length();
    cout<< "\nLength of string str3 is " << str3.length();
    cout<< "\nLength of string str4 is " << str4.length();
	cout<< "\nLength of string str5 is " << str5.length();
    cout<< "\nLength of string str6 is " << str6.length();

	cout<<"\n\n";
}

void string_Modify(){
    string str = "Ramjilal4You";

	//str[15] = 'r';
	
	//str.at(15) = 'A';

	cout<<"Modified String : "<< str <<"\n\n\n\n";
}

// read string from user
/*
cin
getline
cin.getline
*/
void input_output_string() {
    //1. cin
	string str;  // defining string

	cout<< "\nEnter string(cin) : ";	
	cin >> str;  // reading string
	cout<<"\nEntered String is : " << str;  // print string
    cout<<"\nEntered String length : " << str.length();


    //clear the input stream buffer
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    

    //2. istream& getline(istream& is, string& str, char delim);
    string str2;
	cout<< "\n\nEnter string (getline) : ";
	getline(cin, str2);  // reading string
	cout<<"\nEntered String is : " << str2;  // print string
    cout<<"\nEntered String length : " << str2.length();


    //3. cin.getline(char* str, size_t maxlen, char delim)
    const int arr_len = 10;
    char arr[arr_len];
	cout<< "\n\nEnter string (cin.getline) : ";
	cin.getline(arr, arr_len);  // reading string
	cout<<"\nEntered String is : " << arr;  // print string
    cout<<"\nEntered String length : " << strlen(arr);

    cout<<"\n\n\n\n";
}

// how to pass string to functions
void PassStringToFunctn(string str2) { 
    cout << "\n\nPassStringToFunctn() Address of str : " << &str2;
	cout << "\nPassStringToFunctn() string : " << str2;
    cout << "\nPassStringToFunctn() Length : " << str2.length();
    cout << "\nPassStringToFunctn() Sizeof : " << sizeof(str2);
    

    cout<<"\n\n\n";
}

// print string using Pointers
void string_using_pointer()
{
	cout << "\n\nstring_using_pointer() : ";

	string str = "Ramjilal4You";

	// Pointer variable which stores the starting address of the character array str
	char* ptr = &str[0];    //can not use "str" as it denotes to string
	
	int len = 0;

	// While loop will run till the character value is not equal to null character
	while (*ptr != '\0') {
		cout<< *ptr;
		ptr++; // moving pointer to the next character.

        
		len++;  //increase length by 1
	}

	cout<<"\nString length : "<<len;
	cout<<"\n\n";
}


int main()
{
	/*string_Initialize();

    string_Modify();  
*/
	//input_output_string();

	// declare and initialize string
	string str = "Ramjilal4You";
    cout << "\nIn main() string : " << str;
    cout << "\nIn main() Length : " << str.length();
    cout << "\nIn main() Sizeof : " << sizeof(str);
    cout << "\nIn main() Address of str : " << &str;

	PassStringToFunctn(str);  // passing string to a different function

	string_using_pointer();

	return 0;
}
