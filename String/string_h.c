#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void stringlength() {
	char str[] = "MyString";

	size_t length = strlen(str);	// Calculate the length of the string using the strlen() function and store it in the variable 'length'

	printf("String: %s\n", str);	
	printf("Length: %zu\n\n", length);	// Print the length of the string
}

void stringcat() {
	char dest[50] = "This is an";
	char src[50] = " example";

	printf("dest Before: %s\n", dest);

	char* res = strcat(dest, src);	// concatenating src at the end of dest

	printf("dest After: %s\n", dest);
	printf("res : %s\n\n", res);
}

void stringcompare() {
	
	char str1[] = "Ram";  // Define a string 'str1' and initialize it with "Ram"
	
	char str2[] = "For";	// Define a string 'str2' and initialize it with "For"
	
	char str3[] = "Ram";	// Define a string 'str3' and initialize it with "Ram"

	int result1 = strcmp(str1, str2);	// Compare 'str1' and 'str2' using strcmp() function and store the result in 'result1'
	
	int result2 = strcmp(str2, str3);	// Compare 'str2' and 'str3' using strcmp() function and store the result in 'result2'
	
	int result3 = strcmp(str1, str3);	// Compare 'str1' and 'str1' using strcmp() function and store the result in 'result3'

	printf("Comparison of str1 and str2: %d\n", result1);	// Print the result of the comparison between 'str1' and 'str2'
	
	printf("Comparison of str2 and str3: %d\n", result2);	// Print the result of the comparison between 'str2' and 'str3'
	
	printf("Comparison of str1 and str3: %d\n\n", result3);	// Print the result of the comparison between 'str1' and 'str1'
}

void stringcopy() {
	char source[] = "RamforRam";
	char dest[20];

	char* res = strcpy(dest, source);	// Copying the source string to dest

	// printing result
	printf("Source: %s\n", source);
	printf("Destination: %s\n", dest);
	printf("res: %s\n\n", res);
}

void findChar() {
	char str[] = "RamforRam";
	char ch = 'a';

	// Search for the character 'e' in the string Use the strchr function to find the first occurrence of 'e' in the string
	char* result = strchr(str, ch);

	// Character 'e' is found, calculate the index by subtracting the result pointer from the str pointer
	if (result != NULL)
		printf("The character '%c' is found at index %ld\n\n", ch, result - str);
	else
		printf("The character '%c' is not found in the string\n\n", ch);

}

void findstring() {
	
	char s1[] = "RamforRam";	// Define a string 's1' and initialize it with "RamforRam"
	
	char s2[] = "for";	// Define a string 's2' and initialize it with "for"

	char*  result = strstr(s1, s2);	// Find the first occurrence of 's2' within 's1' using strstr() function and assign the result to 'result'

	if (result != NULL)
		printf("Substring found: %s\n\n", result);	// If 'result' is not NULL, it means the substring was found, so print it

	else
		printf("Substring not found.\n\n");	// If 'result' is NULL, it means the substring was not found, so print appropriate message

}

//int main()
//{
//	stringlength();
//	stringcat();
//	stringcompare();
//	stringcopy();
//	findChar();
//	findstring();
//
//	return 0;
//}
