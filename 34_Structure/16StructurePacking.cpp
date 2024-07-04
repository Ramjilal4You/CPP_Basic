// C++ program to illustrate structure padding and packing 
/*
** Structure Packing is the concept to pack the structure tightly by removing the empty ( padded) bytes. 
** C++ language provides two ways for structure packing:
	1. Using #pragma pack(1)
	2. Using __attribute((packed))__
*/
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
	printf("\nSize of int: %zu, char: %zu, double: %zu\n\n", sizeof(int), sizeof(char), sizeof(double));
	printf("sizeof(str1) : Actual = 13, with Padding = %zu\n", sizeof(str1));
	printf("sizeof(str2) : Actual = 13, with Packing = %zu\n\n", sizeof(str2));
	return 0;
}
