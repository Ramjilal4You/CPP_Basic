// C program to illustrate the structure pointer & self referential structures 
#include <stdio.h> 

// structure declaration 
struct Point {
	int x, y;
};

// C program to illustrate the structure pointer
void StructurePointer() {
	struct Point str = { 1, 2 };

	// p2 is a pointer to structure p1 
	struct Point* ptr = &str;

	// Accessing structure members using structure pointer 
	printf("x : %d, y : %d\n", ptr->x, ptr->y);
	printf("x : %d, y : %d\n", str.x, str.y);
}

// C program to illustrate the self referential structures structure template 
struct str {
	int mem1;
	int mem2;
	struct str* next;
}strVar;

void self_referential_structure()
{
	struct str var2 = { 10, 20, NULL };
	struct str var1 = { 1, 2, &var2 };
	

	// assigning the address of var2 to var1.next 
	//var1.next = &var2;

	// accessing var2 members using var1 & pointer of var1
	printf("var2.mem1: %d\nvar2.mem2: %d\n", var1.next->mem1, var1.next->mem2);
}


//int main()
//{
//	//StructurePointer();
//	
//	self_referential_structure();
//
//	return 0;
//}
