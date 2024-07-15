// C++ program to implement typedef with pointers
#include <iostream>
using namespace std;

typedef int* iptr;

typedef int arr[10];    
//typedef int[10] arr;

int main()
{
	int x = 20;
    int y = 10;
	iptr var1 = &x, var2= &y;    //it can be used to declare any number of pointer variables

	cout<<"\n\nValue of var1 is "<< *var1<<endl;

    //it can be used to declare any number of array variables
    arr arr1, arr2;
    for(int i=0;i<10;i++){
        arr1[i]=i;
        arr2[i]=i*2;
    }

    //print the array values
    cout<<"\narr1 : ";
    for(int i=0;i<10;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"\narr2 : ";
    for(int i=0;i<10;i++){
        cout<<arr2[i]<<" ";
    }

cout<<"\n\n\n\n\n";
	return 0;
}
