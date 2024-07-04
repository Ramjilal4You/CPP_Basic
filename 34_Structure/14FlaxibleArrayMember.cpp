// C++ program for variable length members in structures in GCC
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

// A structure of type student
struct student {
	int stud_id;
	int name_len; // used to store size of flexible character array stud_name[]

	int struct_size; //structure size

	// Flexible Array Member(FAM) variable length array must be last member of structure
	char stud_name[];
};

// Memory allocation and initialisation of structure
void FAM_Example1()
{
	struct student* st_ptr1 = NULL;
	char* name="Ramjilal";
	// Allocating memory according to user provided array of characters
	//st_ptr1 = (student*)malloc(sizeof(student) + sizeof(char) * strlen(name));
	const size_t st_size = sizeof(student) + sizeof(char) * strlen(name);
	st_ptr1 = new student[st_size];

	st_ptr1->stud_id = 100;
	st_ptr1->name_len = strlen(name);
	strcpy_s(st_ptr1->stud_name, st_ptr1->name_len+1, name);
	//Assigning size according to size of stud_name which is a copy of user provided array name.
	st_ptr1->struct_size = st_size;

	printf("\nStudent_id(int) : %d\nStud_Name(array) : %s\nName_Length(int): %d\n\nAllocated_Struct_size(int): %d\n\n", 
	st_ptr1->stud_id, st_ptr1->stud_name, st_ptr1->name_len, st_ptr1->struct_size);

	// Size in struct student
	printf("Size of Struct student(*st_ptr1): %lu\n", sizeof(student));

	// Size in struct pointer
	printf("Size of Struct pointer: %zu\n\n\n", sizeof(st_ptr1));
}


int main()
{
	//student st = {10, 20, 30, "Ram"};	//non-static initialization of a flexible array member
	//st.stud_name = malloc(20);	//expression must be a modifiable lvalue

	FAM_Example1();

	return 0;
}
