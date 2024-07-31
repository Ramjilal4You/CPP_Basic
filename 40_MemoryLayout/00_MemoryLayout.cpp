// Check the following simple C++ program
/*  
** 1. Let us start with emprty main() function
** 2. Let us add 5 global variable in the program, now check the size of bss
** 3. Let us add 5 local static variable which is also stored in bss.
** 4. Let us initialize the static variable which will then be stored in the Data Segment (DS)
** 5. Let us initialize the global variable which will then be stored in the Data Segment (DS)
*
*/

// void fun(){
//     // do some work here
// }

// int gVar1;
// int gVar2;
// int gVar3;
// int gVar4;
// int gVar5;

int main(){
    static int sVar1=10;
    static int sVar2=10;
    static int sVar3=10;
    static int sVar4=10;
    static int sVar5=10;

    return 0;
}