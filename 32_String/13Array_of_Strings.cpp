// Array of strings
#include <iostream>

using namespace std;

void array_of_strings() {
	char arr[3][10] = { "Geek", "Geeks", "GeeksFor" };

	cout<<"\nsizeof arr[3][10] : " << sizeof(arr);
	cout<< "\nString array Elements are:\n";

	for (int i = 0; i < 3; i++)
	{
		cout<< arr[i] << endl;
	}

	cout<<"\n\n";
}

// Array of character Pointers -> //Jagged Array
void array_of_pointers() {
	char* arr[3] = { "Geek", "Geeks", "GeeksFor" };

	cout<<"\nsizeof arr[3] : " << sizeof(arr);
	printf("\nchar* array Elements are:\n");

	for (int i = 0; i < 3; i++)
	{
		cout<< arr[i] << endl;
	}

	cout<<"\n\n\n";
}

int main()
{
	array_of_strings();
	array_of_pointers();	//Jagged Array

	return 0;
}

