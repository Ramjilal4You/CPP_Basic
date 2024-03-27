// C program for variable length members in structures in GCC before C99
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




// Structure of type student
struct student {
	int stud_id;
	int name_len;
	int struct_size;
	char stud_name[0];  // variable length array must be last.
};

// Memory allocation and initialisation of structure
struct student* createStudent(struct student* s, char a[])
{
	s = malloc(sizeof(*s) + sizeof(char) * strlen(a));

	s->name_len = strlen(a);
	strcpy(s->stud_name, a);

	s->struct_size = (sizeof(*s) + sizeof(char) * strlen(s->stud_name));

	return s;
}

// Print student details
void printStudent(struct student* s)
{
	printf("Stud_Name : %s\n Name_Length: %d\n Allocated_Struct_size: %d\n\n",
		s->stud_name, s->name_len, s->struct_size);  // Value of Allocated_Struct_size here is in bytes.

}

//// Driver Code
//int main()
//{
//	struct student* s1=NULL, * s2= NULL;
//
//	s1 = createStudent(s1, "Sanjayulsha");
//	s2 = createStudent(s2, "Cherry");
//
//	printStudent(s1);
//	printStudent(s2);
//
//	// size in bytes
//	printf("Size of Struct student: %lu\n", sizeof(struct student));
//
//	// size in bytes
//	printf("Size of Struct pointer: %lu", sizeof(s1));
//
//	return 0;
//}
