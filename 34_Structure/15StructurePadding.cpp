// C++ Program to demonstrate the structure padding property 
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

int main()
{
	printf("\nsizeof(structa) : Actual = 3, expected = %zu\n", sizeof(structa));
	printf("sizeof(structb) : Actual = 7, expected = %zu\n", sizeof(structb));
	printf("sizeof(structc) : Actual = 13, expected = %zu\n", sizeof(structc));
	printf("sizeof(structd) : Actual = 13, expected = %zu\n\n", sizeof(structd));

	return 0;
}
