//arguments Vs parameters
#include <iostream>
using namespace std;

// the variables x and y are parameters (formal)
int my_func(int x, int y)
{
	int result = x * y;

	return result;
}

//int main()
//{
//	int val1 = 2;
//	int val2 = 5;
//
//	// the variables val1 and val2 are arguments (Actual Parameters)
//	int result = my_func(val1, val2);
//
//	cout << "Multiplication of 2 & 5 is : " << result << endl;
//
//	return 0;
//}