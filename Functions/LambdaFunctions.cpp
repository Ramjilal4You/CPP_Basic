/*
* C++11 Introduced Lambda expressions to allow inline functions which can be used for short snippets of code 
that are not going to be reused and therefore do not require a name. 
* A lambda expression can have more power than an ordinary function by having access to variables from 
the enclosing scope.

* Generally, the return-type in lambda expressions is evaluated by the compiler itself and we don’t need 
to specify it explicitly. Also the -> return-type part can be ignored.  However, in some complex cases 
* e.g. conditional statements, the compiler can’t determine the return type and explicit specification is 
required. 
*/

// C++ program to demonstrate lambda expression in C++
#include <iostream>
#include <vector>		//vector
#include <algorithm>	//for_each

using namespace std;

// Function to print vector using for_each & lambda
void printVector(vector<int> v)
{
	// lambda expression to print vector
	for_each(v.begin(), v.end(), [](int i){	std::cout << i << " ";});
	cout << endl;
}

void Lambda_example()
{
	cout << "\nLambda_example()\n";
	vector<int> v{ 1,2,3,4,5,6,7,8 };

	printVector(v);

	// below snippet find first number greater than 4
	// find_if searches for an element for which function(third argument) returns true
	vector<int>::iterator p = find_if(v.begin(), v.end(), [](int i){return i > 4;});
	cout << "First number greater than 4 is : " << *p << endl;


	// function to sort vector, lambda expression is for sorting in
	// non-increasing order Compiler can make out return type as
	// bool, but shown here just for explanation
	sort(v.begin(), v.end(), [](const int& a, const int& b) -> bool{return a > b;});

	printVector(v);

	// function to count numbers greater than or equal to 5
	int count_5 = count_if(v.begin(), v.end(), [](int a){return (a >= 5);});
	cout << "The number of elements greater than or equal to 5 is : "<< count_5 << endl;

	// function for removing duplicate element (after sorting all duplicate comes together)
	p = unique(v.begin(), v.end(), [](int a, int b){return a == b;});

	// resizing vector to make size equal to total different number
	v.resize(distance(v.begin(), p));
	printVector(v);

	//	 We can also access function by storing this into variable
	auto square = [](int i){return i * i;};

	cout << "Square of 5 is : " << square(5) << endl;
}

/*A lambda expression can have more power than an ordinary function by having access to variables from 
the enclosing scope. We can capture external variables from the enclosing scope in three ways :
	  Capture by reference
	  Capture by value
	  Capture by both (mixed capture)
Syntax used for capturing variables :
	  [&] : capture all external variables by reference
	  [=] : capture all external variables by value
	  [a, &b] : capture a by value and b by reference
A lambda with an empty capture clause [ ] can only access variables which are local to it.
*/
void Lambda_example2()
{
	cout << "\n\nLambda_example2()\n";
	vector<int> v1 = { 3, 1, 7, 9 };
	vector<int> v2 = { 10, 2, 7, 16, 9 };
	printVector(v1);
	printVector(v2);
	// access v1 and v2 by reference
	// [&] denotes, can access all variable by reference
	auto pushinto = [&](int m)
		{
			v1.push_back(m);
			v2.push_back(m);
		};

	// it pushes 20 in both v1 and v2
	pushinto(20);

	printVector(v1);
	printVector(v2);

	// access v1 by copy
	[v1]()
		{
			for (auto p = v1.begin(); p != v1.end(); p++)
			{
				cout << *p << " ";
			}
		};

	int N = 5;

	// below snippet find first number greater than N
	// [N] denotes, can access only N by value
	vector<int>::iterator p = find_if(v1.begin(), v1.end(), [N](int i){	return i > N;});

	cout << "First number greater than 5 is : " << *p << endl;

	// function to count numbers greater than or equal to N
	// [=] denotes, can access all variable by value
	int count_N = count_if(v1.begin(), v1.end(), [=](int a){return (a >= N);});

	cout << "The number of elements greater than or equal to 5 is : "<< count_N << endl;
}

//int main() {
//	Lambda_example();
//	Lambda_example2();
//}
