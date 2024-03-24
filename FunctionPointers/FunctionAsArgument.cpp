// function as parameter - event handling & Callback functions
/*
* Callback functions are functions that are executed after a particular event takes place. 
  For example, if a user clicks a button then a text area field should be displayed. In this case, 
  we will have a piece of code that calls our callback function whenever the button is clicked, and 
  then our callback function provides the text area to the user.

* Callback functions are generally useful for event handling just as we saw in the previous example. 
  Because callback functions have to be executed after a particular event occurs like a button click. 
  They have to be called or invoked from some other function. 
  
* In such a case, a function pointer in C++ is very useful, as we can pass a function pointer in C++ as 
  an argument to a different function, and then that function can use the pointer to call our function as 
  a callback whenever some event occurs.
*/

#include <iostream>
using namespace std;

void fun1(){
    // fun1 prints a statement to show that it has been called
    cout << "\nFunction - 1 is called." << endl;
    return ;
}

// A callback function with the name fun2
void fun2(void (*ptr)()){
    // callback to function - 1
    (*ptr) ();
    cout << "\nFunction - 2 is called." << endl;
    return;
}

int main()
{
    // Calling fun_2 and passing the address of fun_1 as the parameter
    fun2(fun1);

	cout<<"\n\n";
    return 0;
}
