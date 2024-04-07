// C Program to demonstrate how to use union
#include <stdio.h>

// union template or declaration
union un {
	int member1;
	char member2;
	double member3;
};

//int main()
//{
//	// defining a union variable
//	union un var1;
//
//	// initializing the union member
//	var1.member1 = 15;
//	printf("The value stored in member1 = %d\n", var1.member1);
//
//	var1.member2 = 'A';	//at a time we can store data in one member only
//	printf("The value stored in member2 = %c\n", var1.member2);
//	printf("The value stored in member1 = %d\n", var1.member1);
//
//	return 0;
//}
