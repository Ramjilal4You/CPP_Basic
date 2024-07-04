/* structure nesting

1. By embedded nested structure.
2. By separate nested structure

*/
#include <iostream>
using namespace std; 

// 1. By embedded nested structure.
struct School{
	char School_name[20];	
	struct student{
		int stud_roll;
		string stud_name;
	} st_var;
};

void nestedStructure_Example1(){
	cout<<"\nBy embedded nested structure\n";

	School School_var = { "Ramjilal4You", {20, "Ram"} };

	cout<<"School_var.School_name : "<<School_var.School_name<<"\nSchool_var.st_var.stud_roll : "<<School_var.st_var.stud_roll
	<<"\nSchool_var.st_var.stud_name : "<<School_var.st_var.stud_name<<endl;
}


//2. By separate nested structure
// child structure declaration 
struct child {
	char cName[20];
	int cAge;
};

// parent structure declaration 
struct parent {
	char pName[20];
	child cVar;
};

void nestedStructure_Example2(){
	cout<<"\nBy separate nested structure\n";

	parent pVar = { "Ram", {"Lov", 15}};

	// accessing and printing nested members 
	printf("pVar.pName = %s\n", pVar.pName);
	printf("pVar.cVar.cName = %s\n", pVar.cVar.cName);
	printf("pVar.cVar.cAge = %d\n\n", pVar.cVar.cAge);
}

int main()
{
	nestedStructure_Example1();

	nestedStructure_Example2();

	return 0;
}
