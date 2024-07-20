// C++ Program to illustrate the Conditional Compilation
#include <iostream>
using namespace std;

#define VALUE 7

#if VALUE > 200
#undef VALUE
#define VALUE 200

#elif VALUE < 50
#undef VALUE
#define VALUE 50

#else
#undef VALUE
#define VALUE 100

#endif

int main()
{
	cout<<"\nValue is "<< VALUE<<"\n\n"; // VALUE = 50

	return 0;
}
