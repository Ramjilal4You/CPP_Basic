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
struct student* createStudent(int id, char a[])
{
	// Allocating memory according to user provided array of characters
	student *s = (student*)malloc(sizeof(student) + sizeof(char) * strlen(a));

	s->stud_id = id;
	s->name_len = strlen(a);
	strcpy_s(s->stud_name, s->name_len+1, a);

	// Assigning size according to size of stud_name which is a copy of user provided array a[].
	s->struct_size = (sizeof(*s) + sizeof(char) * strlen(s->stud_name));

	return s;
}

// Print student details
void printStudent(struct student* s)
{
	printf("Student_id(int) : %d\nStud_Name(array) : %s\nName_Length(int): %d\nAllocated_Struct_size(int): %d\n\n", s->stud_id, s->stud_name, s->name_len, s->struct_size);
}


int main()
{
	struct student* s1 = NULL;
	s1 = createStudent(523, "Ram");
	struct student* s2 = NULL;
	s2 = createStudent(535, "Shyam");

	printStudent(s1);
	printStudent(s2);

	// Size in struct student
	printf("Size of Struct student: %lu\n", sizeof(struct student));

	// Size in struct pointer
	printf("Size of Struct pointer: %zu\n\n\n", sizeof(s1));

	return 0;
}
