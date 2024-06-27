// C program to illustrate strings
#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>

void string_example() {
	// declare and initialize string
	char str1[] = "Hello Ram1";
	char str2[11] = "Hello Ram2";
	char str3[11] = { 'H','e','l','l','o','_','R','a','m','3','\0' };
	char str4[] = { 'H','e','l','l','o','_','R','a','m','4','\0' };

	// print string
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);
	printf("%lu\n", sizeof(str4));

	int length1 = strlen(str1);
	int length2 = strlen(str2);
	int length3 = strlen(str3);
	int length4 = strlen(str4);

	// displaying the length of string
	printf("Length of string str is %d\n", length1);
	printf("Length of string str is %d\n", length2);
	printf("Length of string str is %d\n", length3);
	printf("Length of string str is %d\n\n", length4);
}

// C program to read string from user
void input_output_string() {
	char str[10];  // declaring string

	printf("Enter string upto 10 character : ");
	
	scanf("%s", str);  // reading string

	printf("%s", str);  // print string
}

// C program to illustrate how to pass string to functions
void printStr(char str[]) { printf("String is : %s\n\n", str); }

// C program to print string using Pointers
void string_using_pointer()
{

	char str[20] = "GeeksforGeeks";

	// Pointer variable which stores the starting address of the character array str
	char* ptr = str;  //&str[0] 

	// While loop will run till the character value is not equal to null character
	while (*ptr != '\0') {
		printf("%c", *ptr);

		// moving pointer to the next character.
		ptr++; //ptr = ptr + 1; sizeof(type)*n
	}
	printf("\n");
}


//int main()
//{
//	//string_example();
//
//	//input_output_string();
//
//	// declare and initialize string
//	//char str[] = "GeeksforGeeks";
//	//printStr(str);  // print string by passing string to a different function
//
//	string_using_pointer();
//
//	return 0;
//}
