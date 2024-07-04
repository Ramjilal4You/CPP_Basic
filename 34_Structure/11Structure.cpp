/* C++ program to demonstrate the Structure
** 1. Declaration
** 2. Definition
** 3. Initialization & Assignment
** 4. Accessing element
** 5. deepcopy & shallow copy (brief)
**
*/

#include <iostream>
#include <cstring>

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

// declaring structure
struct myStruct3 {
	int i;
	char c;
	float f;
	char s[30];
};

// declaring structure 
struct myStruct4 {
	int i;
	char* str;
};

int main()
{
	myStruct1 st1_var1; //struct definition

	struct myStruct1 st1_var2 = { 10, 20 };	//struct definition & initialization
	
	st1_var1.val1 = 5;	//struct member initialization
	st1_var1.val2 = 6;	//struct member initialization

	// accessing structure member 
	printf("\nmyStruct1(st1_var1) Members: %d, %d\n", st1_var1.val1, st1_var1.val2);
	printf("myStruct1(st1_var2) Members: %d, %d\n\n", st1_var2.val1, st1_var2.val2);
	printf("myStruct2 Members: %d, %d\n\n", st2_var1.val1, st2_var1.val2);

	// variable initialization with initializer list
	struct myStruct3 st3_var1 = { 1, 'A', 1.00, "Struct Array member" },
		st3_var2;

	// copying structure using assignment operator 
	st3_var2 = st3_var1;

	st3_var2.i=10;	//updated the i value in st3_var1
	strcpy(st3_var2.s, "Updated String");

	printf("myStruct3(st3_var1) Members: %d, %c, %f, %s\n", st3_var1.i, st3_var1.c, st3_var1.f, st3_var1.s);
	printf("myStruct3 (st3_var2) Members: %d, %c, %f, %s\n\n", st3_var2.i, st3_var2.c, st3_var2.f, st3_var2.s);


	// variable initialization with initializer list
	struct myStruct4 st4_var1, st4_var2;

	st4_var1.i = 1;
	st4_var1.str = new char[10];
	strcpy(st4_var1.str,"Ramjilal");

	// copying structure using assignment operator 
	st4_var2 = st4_var1;

	//updated the i value in st3_var1
	strcpy(st4_var2.str, "Updated String");

	printf("myStruct4(st4_var1) Members: %d, %s\n", st4_var1.i, st4_var1.str);
	printf("myStruct4 (st4_var2) Members: %d, %s\n", st4_var2.i, st4_var2.str);


	cout<<"\n\n";
	return 0;
}
