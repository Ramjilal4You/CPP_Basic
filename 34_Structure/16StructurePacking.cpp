// C++ program to illustrate structure padding and packing 
#include <iostream> 

// structure with padding 
struct str1 {
	char c;
	double d;
	int i;
};

#pragma pack(1)
// structure with packing 
struct str2 {
	char c;
	double d;
	int i;
}; // using structure packing 


int main()
{
	printf("Size of int: %zu, char: %zu, double: %zu\n", sizeof(int), sizeof(char), sizeof(double));
	printf("Size of str1: %zu\n", sizeof(struct str1));
	printf("Size of str2: %zu\n", sizeof(struct str2));
	return 0;
}
