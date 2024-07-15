// An example program to demonstrate working of enum in C++
#include <iostream>
using namespace std;

enum week 
{ 
	Mon, 
	Tue, 
	Wed=5, 
	Thur, 
	Fri=10, 
	Sat, 
	Sun 
};

void Enum_Week_Example(){
	cout<<"\n\nMon : "<<Mon<<"\n";
	cout<<"Tue : "<<Tue<<"\n";
	cout<<"Wed : "<<Wed<<"\n";
	cout<<"Thur : "<<Thur<<"\n";
	cout<<"Fri : "<<Fri<<"\n";
	cout<<"Sat : "<<Sat<<"\n";
	cout<<"Sun : "<<Sun<<"\n\n\n";

	cout<<"sizeof(week) : "<<sizeof(week)<<"\n\n\n";

return;
}


// Program to Demonstrate the Functioning of Enumerators with an example of Gender 
void Enum_Gender_Example() 
{ 
	enum Gender { Male, Female }; 	// Defining enum Gender 

	Gender gender; 	// Creating Gender type variable 

	gender = Male;	//gender can take only Male/Female other value will give error

	switch (gender) { 
		case Male: 
			cout << "Gender is Male\n\n"; 
			break; 
		case Female: 
			cout << "Gender is Female\n\n"; 
			break; 
		default: 
			cout << "Value can be Male or Female\n\n"; 
	} 

return; 
}



int main(){

	Enum_Week_Example();

	Enum_Gender_Example();

return 0;
}
