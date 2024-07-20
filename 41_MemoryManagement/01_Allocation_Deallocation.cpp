// C++ program to demonstrate how to create dynamic variable using new

#include <iostream>
#include <memory>
using namespace std;

void MemAllocationUsingNew()
{
    int* ptr;   // pointer to store the address returned by the new
    
    ptr = new int;  // allocating memory for integer

    *ptr = 10;  // assigning value using dereference operator

    // printing value and address
    cout << "\nAddress: " << ptr << "\tValue: " << *ptr << "\n\n";
}

// Custom data type with constructor to take initial value
struct cust {
    int p;
    cust(int q) : p(q) {
        // constructor body
    }
    cust() = default;
};

void MemAllocationUsingNewWithConstructor()
{
    // creating inbuit data types with initial value
    int* p = new int(25);
    float* q = new float(75.25);

    // Works fine, doesn’t require constructor
    cust* var1 = new cust;

    // Works fine, doesn’t require constructor
    var1 = new cust();

    // Notice error if you comment this line
    cust* var = new cust(25);

    cout << *p << " " << *q << " " << var->p<<"\n\n";
}

// deallocation of memory using delete
void MemDeallocationUsingDelete()
{
    int* p = NULL;  // Pointer initialization to null else Wild pointer

    p = new (nothrow) int;  // Request memory for the variable using new operator
    if (!p)
        cout << "allocation of memory failed\n";
    else {
        // Store value at allocated address
        *p = 29;
        cout << "Value of p: " << *p << endl;
    }

    // Request block of memory of size n
    int n = 5;
    int* q = new (nothrow) int[n];

    if (!q)
        cout << "allocation of memory failed\n";
    else {
        for (int i = 0; i < n; i++)
            q[i] = i + 1;

        cout << "Value store in block of memory: ";
        for (int i = 0; i < n; i++)
            cout << q[i] << " ";
    }

    // freed the allocated memory
    delete p;
    p=nullptr;  //dangling pointer

    // freed the block of allocated memory
    //delete q; //--> memory leak
    delete[] q; 
    q=nullptr;

    cout<<"\n\n";
}


//it works but dangerous - constructor/destructor call issue
void ViceVersa()
{
    // creating inbuit data types with initial value
    int *p = new int[10];
    //delete p;
    //delete[] p;
    free(p);
    
    int *q = (int*)malloc(5*sizeof(int));;
    delete q;
    //delete[] q;
    //free(q);
}


int main()
{
    MemAllocationUsingNew();

    MemAllocationUsingNewWithConstructor();

    MemDeallocationUsingDelete();


    ViceVersa();    //it works but dangerous - constructor/destructor call issue 

    return 0;
}
