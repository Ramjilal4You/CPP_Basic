//arguments Vs parameters
#include <iostream>
using namespace std;

// the variables a and b are parameters (formal)
int multiply(int a, int b)
{
	int result = a * b;

	return result;
}

//int main()
//{
//	int x = 2;
//	int y = 5;
//
//	// the variables x and y are arguments (Actual Parameters)
//	int result = multiply(x, y);
//
//	cout << "Multiplication of 2 & 5 is : " << result << endl;
//
//	return 0;
//}