#include <iostream>
#include <string.h>	//strlen
using namespace std;

void stringlength() {
	char str[] = "MyString";

	size_t length = strlen(str);	// Calculate the length of the string using the strlen() function and store it in the variable 'length'

	cout << "\nString: " << str;	
	cout << "\nLength: " << length;	// Print the length of the string

	cout<<"\n\n";
}

void stringcat() {
	char dest[50] = "This is an";
	char src[50] = " example";

	cout << "\ndest Before  : " << dest;

	char* res = strcat(dest, src);	// concatenating src at the end of dest

	cout << "\ndest After   : " << dest;
	cout << "\nReturned res : " << res;

	cout<<"\n\n";
}

void stringcompare() {
	
	char str1[] = "Ram";  // Define a string 'str1' and initialize it with "Ram"
	
	char str2[] = "For";	// Define a string 'str2' and initialize it with "For"
	
	char str3[] = "Ram";	// Define a string 'str3' and initialize it with "Ram"

	cout << "\nComparison of str1 and str2 : " << strcmp(str1, str2);	// Print the result of the comparison between 'str1' and 'str2'
	
	cout << "\nComparison of str2 and str3 : " << strcmp(str2, str3);	// Print the result of the comparison between 'str2' and 'str3'
	
	cout << "\nComparison of str1 and str3 : " << strcmp(str1, str3);	// Print the result of the comparison between 'str1' and 'str1'

	cout<<"\n\n";
}

void stringcopy() {
	char source[] = "RamforRam";
	char dest[20];

	char* res = strcpy(dest, source);	// Copying the source string to dest

	// printing result
	cout << "\nSource str   : " << source;
	cout << "\nDestn str    : " << dest;
	cout << "\nReturned res : " << res;

	cout<<"\n\n";
}

void findChar() {
	char str[] = "Ramjilal4You";
	char ch = 'a';

	// Search for the character 'e' in the string Use the strchr function to find the first occurrence of 'e' in the string
	char* result = strchr(str, ch);

	// Character 'e' is found, calculate the index by subtracting the result pointer from the str pointer
	if (result != NULL)
		printf( "\nThe character '%c' is found at index %ld", ch, result - str);
	else
		printf( "\nThe character '%c' is not found in the string", ch);

	cout<<"\n\n";
}

void findstring() {
	
	char s1[] = "RamforRam";	// Define a string 's1' and initialize it with "RamforRam"
	
	char s2[] = "for";	// Define a string 's2' and initialize it with "for"

	char*  pos = strstr(s1, s2);	// Find the first occurrence of 's2' within 's1' using strstr() function and assign the result to 'result'

	if (pos != NULL)
		cout << "\nSubstring found at index : " << pos-s1;	// If 'result' is not NULL, it means the substring was found, so print it

	else
		cout << "\nSubstring not found.";	// If 'result' is NULL, it means the substring was not found, so print appropriate message

	cout<<"\n\n";
}

int main()
{
	stringlength();
	stringcat();
	stringcompare();
	stringcopy();
	findChar();
	findstring();

	return 0;
}
