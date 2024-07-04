/*  C++ program to demonstrate the Structure
** 1. Array of structures
** 2. The structure pointer 
** 3. self referential structures 
**
*/

#include <iostream>
using namespace std;

struct Point {
	int x, y;
};

// 1. Create an array of structures
void StructureArray(){
	cout<<"\nStructureArray()\n";
	Point arr[10];	//declaration	//int arr[10]

	// Access array members
	arr[0].x = 10;
	arr[0].y = 20;

	cout << arr[0].x << " " << arr[0].y <<endl;
}

/*** 2.	C++ – Pointer to Structure	***/
void StructurePointer(){
	cout<<"\nStructurePointer()\n";
	struct Point p1 = { 1, 2 };
 
    // p2 is a pointer to structure p1
    struct Point* p2 = &p1;	// int * ptr = &i;
 
    // Accessing structure members using structure pointer
    cout << p2->x << " " << p2->y <<endl;
}

// 3. the self referential structure 
struct node {
    int data1;
    char data2;
    struct node* link; //It can have multiple links
};

void self_referential_structure()
{
	cout<<"\nself_referential_structure()\n";
	struct node var1;
	var1.data1 = 10;
	var1.data2 = 'A';
	var1.link = &var1;

	cout<<"Address of var1 : " <<&var1<<endl;
	// accessing var2 members using var1 & pointer of var1
	printf("var1.data1: %d\nvar1.data2: %c, \nvar1.link: %p\n\n\n\n\n", var1.link->data1, var1.link->data2, var1.link);
}

int main()
{
	StructureArray();

	StructurePointer();
	
	self_referential_structure();

	cout<<"\n\n";
	return 0;
}

/*
Applications: Self-referential structures are very useful in creation of other complex data structures: 

Linked Lists
Stacks
Queues
Trees
Graphs etc.

*/
