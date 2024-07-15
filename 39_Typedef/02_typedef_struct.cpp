// C++ program to implement typedef with structures
#include <iostream>
#include <string.h>

using namespace std;

// using typedef to define an alias for structure
typedef struct students {
	char name[50];
	char branch[50];
	int ID_no;
} stu;

typedef students st1;

int main()
{
	//stu st_var;	//1. create variable to struct students
	st1 st_var;		//2. create variable to struct students

	strcpy_s(st_var.name,sizeof("Ramjilal4You"), "Ramjilal4You");
	strcpy_s(st_var.branch, sizeof("Computer Science & Engineering"), "Computer Science & Engineering");
	st_var.ID_no = 108;

	cout<<"\n\nName: "<<st_var.name<<"\n";
	cout<<"Branch: "<<st_var.branch<<"\n";
	cout<<"ID_no: "<<st_var.ID_no<<"\n\n\n\n";




	return 0;
}
