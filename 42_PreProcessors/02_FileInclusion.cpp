// C++ Program to illustrate the File Inclusion

#include <iostream>	//Including the standard header file
#include "myHeader.hxx"	//Including the user defined header file
#include "myHeader.hxx"

using namespace std;

int main()
{
	cout<<"Hello Ramjilal4You !!!\n";

	cout<<"\nmyValue is : "<<myVal<<"\n\n";

    //This calls add function written in myhead.h
	cout<<"4 & 6 Added = "<< add(4, 6)<<"\n\n";

	//This calls multiply function written in myhead.h
	cout<<"5 & 5 Multiplied = "<< multiply(5, 5)<<"\n\n";

	return 0;
}
