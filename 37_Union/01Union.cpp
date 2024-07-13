// C++ Program to demonstrate union
#include <iostream>

using namespace std;

// union template or declaration
union myunion {
	int member1;
	char member2;
	double member3;
};

void Union_Example(){
	// defining a union variable
	myunion un_var1;

	// initializing/assign the union member
	un_var1.member1 = 15;
	cout<<"The value stored in member1 = "<< un_var1.member1<<"\n\n";

	un_var1.member2 = 'A';	//at a time we can store data in one member only
	cout<<"The value stored in member2 = "<< un_var1.member2<<endl;
	cout<<"The value stored in member3 = "<< un_var1.member3<<endl;
	cout<<"The value stored in member1 = "<< un_var1.member1<<"\n\n";

	//size of union is same as largest data member
	cout<<"sizeof(double) "<<sizeof(double)<<endl;
	cout<<"sizeof(myunion) "<<sizeof(myunion)<<"\n\n\n\n";
}

void Anonymous_Union(){
	cout<<"\nAnonymous_Union()\n";
	
	// Creating a anonymous union without a name. 
    union { 
      // Defining data members 
      int mem1; 
      char mem2; 
    }; 
      
    // Assigning value to mem1 directly without any union variable. 
    mem1 = 8; 
    
    cout<<"mem1 = "<<mem1<<endl; // Printing the value. 
      
    
    mem2 = 'A'; // Assigning value to mem2 
    
    cout<<"mem2 = "<<mem2<<"\n\n\n\n\n\n"; // Printing the value 
}

int main()
{
	Union_Example();

	Anonymous_Union();

	return 0;
}
