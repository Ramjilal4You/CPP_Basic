// C++ program to demonstrate the Structure
#include <iostream>

using namespace std;

//structure declaration
struct myStruct1 {
	int val1;
	int val2;
};

//structure declaration & definition
//Structure members can be initialized with declaration in C++
struct myStruct2 {
	int val1 = 100;
	int val2 = 200;
} st2_var1;

// declaring structure with name struct1 
struct myStruct3 {
	int i;
	char c;
	float f;
	char s[30];
};

int main()
{
	struct myStruct1 st1_var1; //struct definition

	struct myStruct1 st1_var2 = { 10, 20 };	//struct definition & initialization
	
	st1_var1.val1 = 5;	//struct member initialization
	st1_var1.val2 = 6;	//struct member initialization

	// accessing structure member 
	printf("\nmyStruct1(st1_var1) Members: %d, %d\n", st1_var1.val1, st1_var1.val2);
	printf("myStruct1(st1_var2) Members: %d, %d\n", st1_var2.val1, st1_var2.val2);
	printf("myStruct2 Members: %d, %d\n", st2_var1.val1, st2_var1.val2);

	// variable initialization with initializer list
	struct myStruct3 st3_var1 = { 1, 'A', 1.00, "Struct Array member" },
		st3_var2;

	// copying structure using assignment operator 
	st3_var2 = st3_var1;

	printf("myStruct3(st1_var1) Members: %d, %c, %f, %s\n", st3_var1.i, st3_var1.c, st3_var1.f, st3_var1.s);
	printf("myStruct3 (st1_var2) Members: %d, %c, %f, %s\n", st3_var2.i, st3_var2.c, st3_var2.f, st3_var2.s);

	cout<<"\n\n";
	return 0;
}
