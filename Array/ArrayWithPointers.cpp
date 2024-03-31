/*** Pointers Vs Array ***
 * 
 * Array and Pointers are vary closely related to each other.
 * The name of an array is considered as a pointer, i.e, the name of an array contains the address of an element.
 * We can use pointers to perform all the possible operations of the array. 
 * Array name is a constant pointer to the first element of the array.
 * 
 * Array decays to the pointers when passed to the function.
 * An array is always passed as pointers.
 * Pass an array to a function, it decays to the pointer.
 * Return using a pointer to the first element of that array. (Function can only return single value)

 * 
*/


#include <iostream>
using namespace std;

/*** Similaraties  ***/

//Traversing the Array using Ponters
void ArrayVsPointer1(){
	cout<<"\nArrayVsPointer1()\n\n";


	// defining array
	int arr[] = { 1, 2, 3, 4, 5 };

	printf("arr = %u \n&arr[0] = %u \n&arr = %u\n", arr, &arr[0], &arr);

	// traversing array using pointer arithmetic
	int* ptr_arr = arr; //ptr_arr = &arr[0];
	
	//int* ptr_arr = &arr;	// Error : data type is not matching

	cout << "Array Elements : ";
	for (int i = 0; i < 5; i++) {
		cout << * ( ptr_arr + i ) << " ";
	}
	
	cout<<endl;
}

//display address of each element of an array
void ArrayVsPointer2(){
	cout<<"\nArrayVsPointer2()\n\n";

    int arr[] = { 1, 2, 3, 4, 5 };
	
    cout << "Displaying address using arrays: " << endl;

    // use for loop to print addresses of all array elements
    for (int i = 0; i < 5; ++i){
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }
    
	
    // declare pointer variable
    int *p = arr; // it can also be written as: p = &arr[0]

    cout<<"\nDisplaying address using pointers: "<< endl;

    // use for loop to print addresses of all array elements using pointer notation

    for (int i = 0; i < 5; ++i){
        cout << "p + " << i << " = "<< p + i << endl;
    }

	cout<<endl;
}

//insert and display data entered by using pointer notation.
void ArrayVsPointer3() {
	cout<<"\nArrayVsPointer3()\n\n";


    int arr[4];

	int* ptr = arr;

   // Insert data using pointer notation
    cout << "Enter the 4 numbers: " << endl;
    for (int i = 0; i < 4; ++i) {
        cin >> *(ptr + i); // store input number in arr[i]
    }

    // Display data using pointer notation
    cout << "Displaying the data: " << endl;
    for (int i = 0; i < 4; ++i) {
        // display value of arr[i]
        cout << *(ptr + i) << endl ;
    }

    cout<<endl;
}

//Array length using pointer
void ArrayLengthUsingPointer(){
	cout<<"\nArrayLengthUsingPointer()\n\n";

	// defining array
	int arr[] = { 1, 2, 3, 4, 5 };

	int len = *(&arr + 1) - arr;   //Not same as arr+1

	cout << "Length of Array : " << len << endl;
}

/*** Difference  ***/
// Program to show that array and pointers are different 
void ArrayVsPointer4() { 
	cout<<"\nArrayVsPointer4()\n\n";


	int arr[] = { 1, 2, 3, 4, 5 };
	int* ptr = arr; 

	// sizof(int) * (number of element in arr[]) is printed 
	printf("Size of arr[] %ld\n", sizeof(arr)); 

	// sizeof a pointer is printed which is same for all 
	// type of pointers (char *, void *, etc) 
	printf("Size of ptr %ld \n", sizeof(ptr)); 

}

// Array parameters are always passed as pointers, even when we use square brackets
void ArrayParameterFun(int arr[]) 
{ 
	int x = 10; 

	// size of a pointer is printed 
	printf("sizeof(arr) = %d\n", (int)sizeof(*arr)); 

	// This allowed because ptr is a pointer, not array 
	arr = &x; 

	printf("*ptr = %d ", *arr); 

} 

//Passing array an Argument
void ArrayVsPointer5() { 
	cout<<"\nArrayVsPointer5()\n\n";


	int arr[] = { 10, 20, 30, 40, 50, 60 }; 
	
	// size of a array is printed 
	printf("sizeof(arr) = %d\n", (int)sizeof(arr)); 

	ArrayParameterFun(arr); 	//passing array as argument
}


int main()
{
	//ArrayVsPointer1();

	//ArrayVsPointer2();

	//ArrayVsPointer3();

	//ArrayLengthUsingPointer();

	//ArrayVsPointer4();

	ArrayVsPointer5();

	cout<<"\n\n\n\n";

	return 0;
}