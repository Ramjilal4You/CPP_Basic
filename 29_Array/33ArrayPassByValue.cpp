// passing an array by value using structures.
#include<iostream>
#include<algorithm>
using namespace std;

// An array is passed
void modifyArray(int arr[])
{
	// Display array contents
	printf("In 'modifyArray()', before modification\n");
	for_each(arr,arr+5, [](int i){ cout<< i << " ";});

	printf("\n");

	// Modify the array
	for_each(arr,arr+5, [](int &i){ i = 100; });

	printf("\nIn 'modifyArray()', after modification\n");
	for_each(arr,arr+5, [](int i){ cout<< i << " ";});

	cout<<"\n\n";
}

// A wrapper for array to make sure that array is passed by value.
struct ArrayWrapper
{
	int arr[5];
};

// An array is passed by value wrapped in temp
void modify(struct ArrayWrapper temp)
{
	int* ptr = temp.arr;

	// Display array contents
	printf("In 'modify()', before modification\n");
	for_each(ptr,ptr+5,[](int i){ cout<< i << " ";});

	printf("\n");

	// Modify the array
	for_each(ptr, ptr+5, [](int &i){ i = 200;});

	printf("\nIn 'modify()', after modification\n");
	for_each(ptr,ptr+5,[](int i){ cout<< i << " ";});
}

int main()
{
	int arr[]={1,2,3,4,5};
	modifyArray(arr);
	printf("In 'Main()', After modifyArray()\n");
	for_each(arr,arr+5,[](int i){cout<< i <<" ";});
	cout<<"\n\n";

	cout<<"\n**************\n\n";

	struct ArrayWrapper st;
	for (int i = 0; i < 5; i++)
		st.arr[i] = i+1;

	modify(st);

	// Display array contents
	printf("\n\nIn 'Main', after calling modify() \n");
	for (int i = 0; i < 5; i++)
		cout<< st.arr[i] <<" ";

	printf("\n\n\n\n");

	return 0;
}
