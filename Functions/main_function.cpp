// C++ Program to illustrate the main function with & without command line arguments
#include <iostream>
using namespace std;

//run without main(), comment main() function and run it
//error LNK2019: unresolved external symbol main referenced in function "int __cdecl invoke_main(void)"
void WithoutMain() {
	cout << "WithoutMain()\n";
	return;
}

/*without cmd arguments*/
//int main() 
//{
//	cout << "In Main() : Without command line arguments\n";
//	return 0;
//}

/*Command line Args using VS : "Project->properties->debugging->command arguments : 
"Argument1 Argument2 Argument3"*/
//int main(int argc, char* argv[])
//{
//	// printing the count of arguments
//	printf("The value of argc is %d\n", argc);
//
//	// prining each argument
//	for (int i = 0; i < argc; i++) {
//		printf("Arg %d : %s \n",i, argv[i]);
//	}
//
//	return 0;
//}