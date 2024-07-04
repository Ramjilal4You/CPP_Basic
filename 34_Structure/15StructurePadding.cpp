// C++ Program to demonstrate the structure padding property 
/*
** Structure padding is the concept of adding one or more empty bytes between the different data types 
   to align data in memory according to largest member size.
** It increases memory consumption but reduces CPU read cycles.
*/
#include <iostream> 

// Alignment requirements (typical 32 bit machine) 

// char     1 byte 
// short int  2 bytes 
// int     4 bytes 
// double    8 bytes 

// structure A 
typedef struct structa {
	char c;
	short int s;
} structa;

// structure B 
typedef struct structb {
	short int s;
	char c;
	int i;
} structb;

// structure C 
typedef struct structc {
	char c;	//7byte empty
	double d;
	int s;
} structc;

// structure D 
typedef struct structd {
	double d;
	int s;
	char c;
} structd;

// structure E 
typedef struct structe {
	char arr[9];
	double d;
	int s;
} structe;

int main()
{
	printf("\nSize of int: %zu, char: %zu, double: %zu\n\n", sizeof(int), sizeof(char), sizeof(double));
	
	printf("\nsizeof(structa) : Actual = 3, with Padding = %zu\n", sizeof(structa));
	printf("sizeof(structb) : Actual = 7, with Padding = %zu\n", sizeof(structb));
	printf("sizeof(structc) : Actual = 13, with Padding = %zu\n", sizeof(structc));
	printf("sizeof(structd) : Actual = 13, with Padding = %zu\n\n", sizeof(structd));
	printf("sizeof(structe) : Actual = 23, with Padding = %zu\n\n", sizeof(structe));

	return 0;
}
