// C++ program to demonstrate importance of typedef over #define for data types 
#include <iostream> 
using namespace std;

typedef char* ptr;

#define iPTR int* 

int main()
{
	//pointer size is 8byte & char size is 1 byte
	ptr a, b, c;	// char* a, char* b, char* c;
	iPTR x, y, z;	// char* x, y, z;
	cout<<"sizeof a: "<< sizeof(a)<<"\n";   //8byte
	cout<<"sizeof b: "<< sizeof(b)<<"\n";   //8byte
	cout<<"sizeof c: "<< sizeof(c)<<"\n";   //8byte
	cout<<"sizeof x: "<< sizeof(x)<<"\n";   //8byte
	cout<<"sizeof y: "<< sizeof(y)<<"\n";   //1byte
	cout<<"sizeof z: "<< sizeof(z)<<"\n";   //1byte
	return 0;
}
