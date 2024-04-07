//// C Program to illustrate bit fields in structures 
//#include <stdio.h> 
//
//// declaring structure for reference 
//struct str1 {
//	int a;
//	char c;
//};
//
//// structure with bit fields 
//struct str2 {
//	int a : 16; // size of 'a' is 3 bytes = 24 bits 
//	char c;
//};
//
//// driver code 
//int main()
//{
//	printf("Size of Str1: %zu\nSize of Str2: %zu", sizeof(struct str1), sizeof(struct str2));
//	return 0;
//}
