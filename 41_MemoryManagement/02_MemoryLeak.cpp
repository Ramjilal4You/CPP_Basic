/* Function with memory leak */
#include <memory>

int main()
{
    int* ptr = new int;
    int* ptr2 = new int[10];

    /* Memory allocated by new is released */
    delete ptr;
    //delete ptr2;    //memory leaks
    delete[] ptr2;   


    return 0;
}
