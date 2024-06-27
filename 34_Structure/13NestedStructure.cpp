/* structure nesting

1. By embedded nested structure.
2. By separate nested structure

*/
#include <iostream>
using namespace std; 

// 1. By embedded nested structure.
struct School{
	char Section;	
	struct student{
		int stud_roll;
		string stud_name;
	} st2;
};

void nestedStructure1(){
	cout<<"\nnestedStructure1()\n";

	School st1 = { 'A', 20, "Ram" };

	cout<<"st1.Section : "<<st1.Section<<"\nst1.st2.stud_roll : "<<st1.st2.stud_roll
	<<"\nst1.st2.stud_name : "<<st1.st2.stud_name<<endl;
}


//2. By separate nested structure
// child structure declaration 
struct child {
	int x;
	char c;
};

// parent structure declaration 
struct parent {
	int a;
	struct child b;
};

void nestedStructure2(){
	cout<<"\nnestedStructure2()\n";

	struct parent var1 = { 25, 195, 'A' };

	// accessing and printing nested members 
	printf("var1.a = %d\n", var1.a);
	printf("var1.b.x = %d\n", var1.b.x);
	printf("var1.b.c = %c\n", var1.b.c);
}

int main()
{
	nestedStructure1();

	nestedStructure2();

	return 0;
}
