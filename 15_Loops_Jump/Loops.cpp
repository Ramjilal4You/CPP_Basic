// C++ program to demonstrate for loop
#include <iostream>
#include <vector>

using namespace std;

//for loop : print statement 5 times
void for_loop() {
	cout << "\nfor_loop:\n";
	for (int i = 1; i <= 5; i++)
	{
		cout<<"Hello For Loop \n";  // statement will be printed
	}
}

/*For loop can be used to iterating through the elements in the STL container.
here we have to use iterator.*/
#include <vector>

void ForLoopWithSTLIterator()
{
	cout << "\nForLoopWithSTLIterator:\n";
	vector<int> v = { 1, 2, 3, 4, 5 };
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "\t";
	}
	cout << endl;
}

/* Range-based for loop. 
It executes a for loop over a range. 
Used as a more readable equivalent to the traditional for loop operating over a range 
of values, such as all elements in a container.
*/
/*
* Syntax
for ( range_declaration : range_expression )
	loop_statement

Parameters :
	range_declaration : a declaration of a named variable, whose type is the type of the 
	element of the sequence represented by range_expression, or a reference to that type.
	Often uses the auto specifier for automatic type deduction.

	range_expression : any expression that represents a suitable sequence or a braced-init-list.

	loop_statement : any statements, which is the body of the loop.
*/
void forLoop_RangeBased()
{
	cout << "\nforLoop(RangeBased/foreach):\n";

	std::vector<int> v = { 0, 1, 2, 3, 4, 5 };

	cout << "\nprint all vector/array elements:\n";
	for (const int& i : v) // access by const reference
		std::cout << i << ' ';
	std::cout << '\n';

	for (int i : v) // access by value, the type of i is int
		std::cout << i << ' ';
	std::cout << '\n';

	for (auto&& i : v) // access by forwarding reference, the type of i is int&
		std::cout << i << ' ';
	std::cout << '\n';

	const auto& cv = v;

	for (auto&& i : cv) // access by f-d reference, the type of i is const int&
		std::cout << i << ' ';
	std::cout << '\n';

	for (int n : {10, 11, 12, 13, 14, 15}) // the initializer may be a braced-init-list
		std::cout << n << ' ';
	std::cout << '\n';

	int a[] = { 0, 1, 2, 3, 4, 5 };
	for (int n : a) // the initializer may be an array
		std::cout << n << ' ';
	std::cout << '\n';

	for ([[maybe_unused]] int n : a)
		std::cout << 1 << ' '; // the loop variable need not be used
	std::cout << '\n';

	//for (auto n = v.size(); auto i : v) // the init-statement (C++20)
	//	std::cout << --n + i << ' ';
	//std::cout << '\n';

	//// typedef declaration as init-statement (C++20)
	//for (typedef decltype(v)::value_type elem_t; elem_t i : v)
	//	std::cout << i << ' ';
	//std::cout << '\n';

	//// alias declaration as init-statement (C++23)
	//for (using elem_t = decltype(v)::value_type; elem_t i : v)
	//	std::cout << i << ' ';
	//std::cout << '\n';
}


// while loop : print statement 5 times
void while_loop()
{
	cout << "\nwhile_loop:\n";
	// Initialization of loop variable
	int i = 0;

	// setting test expression as (i < 5), means the loop will execute till i is less than 5
	while (i < 5) {

		// loop statements
		cout<<"Hello While Loop\n";

		// updating the loop variable
		i++;
	}
}

// do...while loop : print statement 5 times
void do_while_loop()
{
	cout << "\ndo_while_loop:\n";
	int i = 0;

	do {
		cout<<"Hello do while loop\n";

		i++;  //increment i;

	} while (i < 5); // false condition
}

//nested loop : print statement 5 times
void nested_loop() {
	cout << "\nnested_loop:\n";
	for (int i = 1; i <= 5; i++)
	{
		cout << "nested_loop row no." << i << " -> ";
		int j = 1;
		while (j <= 5) 
		{
			cout << j<<" ";	// while statements : print j

			j++;	// updating the loop variable j
		}

		cout << "\n";
	}
}

// Infinite loops : using for and while loop
// Uncomment the sections to see the output
void InfiniteLoop()
{
	int i;

	// An infinite for loop as the condition expression is blank
	for (;;) {
		cout << "This loop will run forever.\n";
	}

	// An infinite while loop as the condition given in while loop will always be true
	/*while (1)
	{
		cout << "This while loop will run forever.\n";
	}*/
	
}

//int main()
//{
//	/*for_loop();
//	ForLoopWithSTLIterator();
//	forLoop_RangeBased();*/
//
//	//while_loop();
//	
//	//do_while_loop();
//
//	//nested_loop();
//
//	InfiniteLoop();	//Uncomment it to see the output
//
//	return 0;  // Return statement to tell that everything executed safely
//}

/*
*** Important Points ***
* Use for loop when number of iterations are known beforehand, i.e. the number of times the loop body is needed to be executed is known.
* Use while loop, where an exact number of iterations is not known but the loop termination condition is known.
* Use do while loop if the code needs to be executed at least once like in Menu-driven programs.
*/
