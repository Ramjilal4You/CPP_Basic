// C Program to print Array of strings
#include <stdio.h>

void array_of_strings() {
	char arr[3][10] = { "Geek", "Geeks", "Geekfor" };

	printf("String array Elements are:\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", arr[i]);
	}
	printf("\n\n");
}

// C Program to print Array of Pointers
void array_of_pointers() {
	char* arr[] = { "Geek", "Geeks", "Geekfor" };
	printf("char* array Elements are:\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", arr[i]);
	}
}

//int main()
//{
//	array_of_strings();
//	array_of_pointers();
//
//	return 0;
//}

