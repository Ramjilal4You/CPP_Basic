#include <iostream>
#include <string> // for string class 

using namespace std;

// push_back() and pop_back() 
void InputFunctions() 
{ 
	cout<<"\nInputFunctions()\n";

	//1. Inserting a character
	string str1="Ramjilal4You";
	str1.push_back('A');

	// Displaying string 
	cout << "The string after push_back operation is : "; 
	cout << str1 << endl; 

	//2. Deleting last character from string 
	str1.pop_back(); 

	// Displaying string 
	cout << "The string after pop_back operation is : "; 
	cout << str1 << endl; 

	cout<<"\n\n";
}

// capacity(), resize() and shrink_to_fit()  
void CapacityFunctions() 
{ 
	cout<<"\n\nCapacityFunctions() \n";
	// Initializing string 
	string str = "Ramjilal4You Ramjilal4You 1"; 

	// Displaying string 
	cout << "The initial string is : " << str << endl; 
	cout << "The initial length is : "<< str.length() << endl; 
	cout << "The capacity of string is : " << str.capacity() << endl; 
	// Resizing string using resize() 
	str.resize(12); 

	// Displaying string 
	cout << "The string after resize operation is : "; 
	cout << str << endl; 

	// Displaying capacity of string 
	cout << "The capacity of string is : "; 
	cout << str.capacity() << endl; 

	// Displaying length of the string 
	cout << "The length of the string is :" << str.length()	<< endl; 

	// Decreasing the capacity of string using shrink_to_fit() 
	str.shrink_to_fit(); 

	// Displaying string 
	cout << "The new capacity after shrinking is : "; 
	cout << str.capacity() << endl;
}

// copy() and swap() 
void ManipulatingFunctions() 
{ 
	cout<<"\n\nManipulatingFunctions()\n";
	// Initializing 1st string 
	string str1 = "Manipulating"; 

	// Declaring 2nd string 
	string str2 = "Functions"; 

	// Declaring character array 
	char ch[80]; 

	// using copy() to copy elements into char array 
	// copies "Manipulating" 
	str1.copy(ch, 12, 0);
	ch[12]='\0';

	// Displaying char array 
	cout << "The new copied character array is : "; 
	cout << ch << endl; 

	// Displaying strings before swapping 
	cout << "The 1st string before swapping is : "; 
	cout << str1 << endl; 
	cout << "The 2nd string before swapping is : "; 
	cout << str2 << endl; 

	// using swap() to swap string content 
	str1.swap(str2); 

	// Displaying strings after swapping 
	cout << "The 1st string after swapping is : "; 
	cout << str1 << endl; 
	cout << "The 2nd string after swapping is : "; 
	cout << str2 << endl; 
}

// begin(), end(), rbegin(), rend(), cbegin(), cend(), crbegin(), crend() 
void IteratorFunctions() 
{ 
	cout<<"\n\nIteratorFunctions() \n";
	
	// Initializing string` 
	string str = "Ramjilal4You"; 

	// Declaring iterator 
	std::string::iterator it; 

	// Declaring reverse iterator 
	std::string::reverse_iterator it1; 

	cout<<"string : "<<str<<"\n"; 

	// Displaying string 
	cout << "string using forward iterators is : "; 
	for (it = str.begin(); it != str.end(); it++){ 
		if(it == str.begin()) 
			*it='r'; 
		cout << *it; 
	} 
	cout << endl; 

	str = "Ramjilal4You"; 
	// Displaying reverse string 
	cout << "using reverse iterators is : "; 
	for (it1 = str.rbegin(); it1 != str.rend(); it1++){ 
		if(it1 == str.rbegin()) 
			*it1='U'; 
		cout << *it1; 
	} 
	cout << endl; 
	
str = "Ramjilal4You"; 
//Displaying String 
cout<<"using constant forward iterator is :"; 
for(auto it2 = str.cbegin(); it2!=str.cend(); it2++){ 
		//if(it2 == str.cbegin()) *it2='r'; 
		//here modification is NOT Possible 
		//error: assignment of read-only location 
		//As it is a pointer to the const content, but we can inc/dec-rement the iterator 
		cout<<*it2; 
} 
cout<<"\n"; 
	
str = "Ramjilal4You"; 
//Displaying String in reverse 
cout<<"using constant reverse iterator is :"; 
for(auto it3 = str.crbegin(); it3!=str.crend(); it3++){ 
		//if(it2 == str.cbegin()) *it2='S'; 
		//here modification is NOT Possible 
		//error: assignment of read-only location 
		//As it is a pointer to the const content, but we can inc/dec-rement the iterator 
		cout<<*it3; 
} 
cout<<"\n\n\n"; 
} 


int main(){

    InputFunctions();
	CapacityFunctions();
	ManipulatingFunctions();

	IteratorFunctions();

	cout<<"\n\n\n\n";
    return 0;
}