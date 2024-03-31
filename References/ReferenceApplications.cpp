/* *** Applications of Reference in C++ ***

*   - Modify the passed parameters in a function.
*   - Avoiding a copy of large structures.
*   - In For Each Loop to modify all objects.
*   - For Each Loop to avoid the copy of objects.
*/

#include <iostream>
using namespace std;


// Modify the passed parameters in a function.
// Avoiding a copy of large structures.
struct Student{
    int roln;
    string name;
    string Addr;
};

// Function having parameters as references
void EnterDetails(Student& ref_s1)
{
    cout<<"Address of &ref_s1 : "<<&ref_s1<<endl;

	cout<<"Enter Roll Number : ";
    cin>>ref_s1.roln; //->

    cout<<"Enter Name : ";
    cin>>ref_s1.name;

    cout<<"Enter Address : ";
    cin>>ref_s1.Addr;
}

// Function having parameters as references
void PrintDetails(const Student& ref2_s1)
{
    cout<<"\n\nStudent Details\n";
    cout<<"Address of &ref2_s1 : "<<&ref2_s1<<endl;
	cout<<"Roll Number : "<<ref2_s1.roln<<endl;

    cout<<"Roll Name : "<<ref2_s1.name<<endl;

    cout<<"Roll Address : "<<ref2_s1.Addr<<endl;

    cout<<"\n\n";
}

void PassingArgumentAsReference(){
    Student s1;
    cout<<"Address of s1 : "<<&s1<<endl;

    EnterDetails(s1);

    PrintDetails(s1);
}


int& ReturnValueAsReference(){
    static int return_value = 50;
    cout<<"Address of return_value : "<<&return_value<<endl;
    return return_value;
}
// In For Each Loop to modify all objects.
// For Each Loop to avoid the copy of objects.
#include <vector>

void ForeachWithReference()
{
	int vect[]={ 10, 20, 30, 40 };

	// modify elements using reference
    // avoid the copy of objects
	for (int& x : vect) {
		x = x + 5;
	}

	// Printing elements
    // copy of objects is happening here from vect to x1
	for (int x1 : vect) {
		cout << x1 << " ";
	}
	cout << '\n';
}

// Driver function
int main()
{
    // Modify the passed parameters in a function.
    // Avoiding a copy of large structures.

    //PassingArgumentAsReference();

    int &result = ReturnValueAsReference();
    cout<<"Address of result : "<<&result<<endl;
    cout<<"\nresult = "<<result<<"\n\n";


    // In For Each Loop to modify all objects.
    // For Each Loop to avoid the copy of objects.
    
    ForeachWithReference();

	return 0;
}
