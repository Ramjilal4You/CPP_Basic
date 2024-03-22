// C++ program to demonstrate problem with NULL
#include <iostream>

using namespace std;

// function with integer argument
void fun(int N) { cout << "\nfun(int) called\n"; return;}

// Overloaded function with char pointer argument
void fun(char* s) { cout << "\nfun(char *) called\n"; return;}

void NUllIsZero(){
    if(NULL==0)
        cout<<"\nNULL is 0\n\n";
    else
        cout<<"\nNULL is not 0\n\n";

    if(NULL==0.0)
        cout<<"\nNULL is 0.0\n\n";
    else
        cout<<"\nNULL is not 0.0\n\n";

    if(NULL=='\0')
        cout<<"\nNULL is '0' char\n\n";
    else
        cout<<"\nNULL is not '0' char\n\n";
}

int main() 
{ 
    NUllIsZero();

    //no issue with NULL
	int iValue = NULL;
    bool flag = NULL;
    char ch=NULL;
    float fValue = NULL;
    int *ptr_int = NULL;

    cout<<"\n iValue="<<iValue<<"\n flag="<<flag<<"\n ch="<<ch<<"\n fValue="<<fValue<<"\n ptr_int="<<ptr_int<<endl;
    
    // Ideally, it should have called fun(char *), but 
	//fun(NULL);    // it causes compiler error. as it can call both functions
                    // NULL is typically defined as (void *)0 and conversion of NULL to integral types is allowed. 
                    // So the function call fun(NULL) becomes ambiguous. 
    fun(0);
    fun(nullptr);   // it works fine., it's type is std::nullptr_t


    //int y = nullptr; //error C2440: 'initializing': cannot convert from 'nullptr' to 'int'
    //bool flag1 = nullptr;
    int* ptr = nullptr;
    
    cout<<"\n ptr="<<ptr<<endl;
    
    if(ptr)
        {cout<<"\nptr is True\n";}
    else
        {cout<<"\nptr is False\n";}




    /*Compare NULL & nullptr*/
    if(NULL==nullptr)
        cout<<"\nNULL & nullptr are same.\n";
    else
        cout<<"\nNULL & nullptr are not same.\n";
    
    cout<<"\n\n";
    return 0;
}


