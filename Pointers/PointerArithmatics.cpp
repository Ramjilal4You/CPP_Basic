#include <iostream>

using namespace std;

// Pointer increment & decrement
// Pointers are incremented and decremented by the size of the data type they point to
void Increment_Decrement()
{
	int a = 22;
	int* p = &a;
	printf("p   = %u\n", p);     // p = 223344500  // %p gives an hexa-decimal value, convert it into an unsigned int value by using %u

	printf("++p = %u\n", ++p);   //++p = 223344504 +4 // int - 4 bytes

	printf("--p = %u\n\n", --p); //--p = 223344500	 -4 // restored to original value


	double b = 22.22;
	double* q = &b;
	printf("q   = %u\n", q);     //q = 223344568
	
	printf("++q = %u\n", ++q);   //++q = 223344576	 +8 // double - 8 bytes
	
	printf("--q = %u\n\n", --q); //--q = 223344568	 -8 // restored to original value
	

	char c = 'a';
	char* r = &c;
	printf("r   = %u\n", r);   //r = 223344628
	
	printf("++r = %u\n", ++r); //++r = 223344629	 +1 // char - 1 byte
	
	printf("--r = %u\n", --r); //--r = 223344628	 -1 // restored to original value

	cout << "\n\n";
}

// Pointer Addition
void Pointer_Addition()
{
	// Pointer to an integer, Pointer stores the address of N
	int N = 4;
	int* ptr1 = &N;
	cout << "size of int is : " << sizeof(int) << endl;

	cout << "Pointer ptr1 before Addition of 3: ";
	printf("%u \n", ptr1);  // %p gives an hexa-decimal value, convert it into an unsigned int value by using %u

	ptr1 += 3;  //ptr1 = ptr1 + 3*sizeof(int);
	cout << "Pointer ptr1 after Addition of 3: ";
	printf("%u \n\n", ptr1);


	//Lets take "pointer to double" example, double size is 8bytes
	double D = 5.0;
	double* ptr2 = &D;
	cout << "size of double is : " << sizeof(double) << endl;
	cout << "Pointer ptr2 before Addition of 3: ";
	printf("%u \n", ptr2);

	// Addition of 3 to ptr2
	ptr2 = ptr2 + 3;	//ptr2 = ptr2 + 3*sizeof(double);
	cout << "Pointer ptr2 after Addition of 3: ";
	printf("%u \n\n", ptr2);
}

// Subtraction of two pointers
void Subtraction_of_two_pointers()
{
	int x = 6; // Integer variable declaration
	int N = 4;

	int* ptr1 = &x; // stores address of x
	int* ptr2 = &N; // stores address of N

	printf(" ptr1 = %u, ptr2 = %u\n", ptr1, ptr2);  // %p gives an hexa-decimal value, convert it into an unsigned int value by using %u

	int res = ptr2 - ptr1;  // Subtraction of ptr2 - ptr1 //ptr2 - ptr1 = 32, 32/4 = 8

	printf("Subtraction of ptr2 - ptr1 is %d\n\n", res);  // Print x to get the Increment between ptr1 and ptr2
}

// Pointer comparision
void Pointer_comparision()
{
	int arr[5]; // declaring array

	int* ptr1 = arr;	// declaring pointer to array name

	int* ptr2 = &arr[0];	// declaring pointer to first element

	if (ptr1 == ptr2) {
		cout << "Pointer to Array Name and First Element are Equal.\n\n";
	}
	else {
		cout << "Pointer to Array Name and First Element are not Equal.\n\n";
	}

	int val = 20;

	int* ptr3 = &val;
	int* ptr4 = &val;

	if (ptr3 == ptr4) {
		cout << "ptr3 and ptr4 are pointing to same location.\n\n";
	}
	else {
		cout << "ptr3 and ptr4 are not pointing to same location.\n\n";
	}
}

void LengthOfArray_PointerArithmatic() {

	int Arr[] = { 1, 2, 3, 4, 5, 6 };

	// variable to store the size of Arr
	int length = *(&Arr + 1) - Arr;  //Not same as Arr+1

	cout << "Number of elements in Arr[] is: " << length << endl;
}

//int main() {
//	//Increment_Decrement();
//
//	//Pointer_Addition();  //same concept applies for Subtraction  
//
//	//Subtraction_of_two_pointers();
//
//	//Pointer_comparision();
//
//	//LengthOfArray_PointerArithmatic();
//
//	return 0;
//}
