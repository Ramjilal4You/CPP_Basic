// C program to implement typedef with structures
#include <stdio.h>
#include <string.h>

// using typedef to define an alias for structure
typedef struct students {
	char name[50];
	char branch[50];
	int ID_no;
} stu;

//int main()
//{
//	stu st;
//	strcpy_s(st.name,sizeof("Kamlesh Joshi"), "Kamlesh Joshi");
//	strcpy_s(st.branch, sizeof("Computer Science And Engineering"), "Computer Science And Engineering");
//	st.ID_no = 108;
//
//	printf("Name: %s\n", st.name);
//	printf("Branch: %s\n", st.branch);
//	printf("ID_no: %d\n", st.ID_no);
//	return 0;
//}
