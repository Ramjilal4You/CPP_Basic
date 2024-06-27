// Function Pointer as Return Type & Conclusion
/*
* A function pointer in C++ can also be used as a return type for a different function. 
  This means that the particular function will be returning a function pointer as the return type.

* But, the C++ compiler doesn’t allow the return type for a function to be a function pointer in C++, so we will define the function pointer as a custom data type. After this, we can use this newly defined type, which is actually for a function pointer, as the return type for functions.
*/
#include <iostream>
using namespace std;

//typedef <return_type> (*<alias_name>)(<parameter_type>,<parameter_type>,....);
typedef int (*ptr1_td)(int, int);

int multiply(int x, int y)
{
	cout << "\nIn multiply() : "<< x <<" * "<< y<<" = ";

    return x * y;
}
 
// function that returns a function pointer
ptr1_td print()
{
    cout << "\nIn print()\n";
    
    // function pointer is returned
    return &multiply;
}
 
// Driver Code
int main(){
    // define a variable
    int x = 10, y = 20;
    
    //typedef can not be used directly
    //(*ptr1_td)(int, int);

    // define a function pointer
    ptr1_td (*fPtr)();
    fPtr = print;
    
    // invoke the pointer and pass the variable as an argument
    cout << ( * fPtr () ) (x, y) << "\n\n";		//after print() return -> add(x, y);
 
    return 0;
}

/* *** Conclusion ***
- Just like variables, functions also have pointers to them, that stores the address which points to the first instruction of the function.

- The address of a function can be accessed by just writing the function name without the ampersand (&).

- They are mainly useful for event-driven applications, callbacks, and even for storing the functions in arrays.

- Callback functions are functions that are executed when a particular event takes place. This can be achieved by using a function pointer.

- A function pointer cannot be used to allocate or deallocate memory as they point to the address of the code.

- We can also call a function indirectly with the help of a pointer (function pointer) by using the name of the function pointer.

- A function pointer can also be used as a return type or as an argument to another function.

*/