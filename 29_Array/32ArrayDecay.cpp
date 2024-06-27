// A C++ program to show that we use template and
// reference to find size of integer array parameter
#include <iostream>
using namespace std;

//array decay, gaetting argument as pointer
void findSize1(int arr[]){
    cout << "\n\nfindSize1(int arr[]) : "<<sizeof(arr);
}

template <size_t n>
void findSize2(int (&arr)[n])
{
	cout << "\n\nfindSize2(int (&arr)[n]) : "<<sizeof(arr);
}

template <size_t n>
void findSize3(int (*arr)[n])
{
	cout << "\n\nfindSize3(int (*arr)[n]) : "<<sizeof(arr);
}

int main()
{
	int a[10] = {0};
	cout <<"\nSize of array in main() : "<< sizeof(a) << " ";

	findSize1(a);   //array decay, array 1st get converted to pointer & passed

	findSize2(a);   //pass by reference (No array decay)

    findSize3(&a);  //pass by pointer

    cout<<"\n\n\n";
	return 0;
}