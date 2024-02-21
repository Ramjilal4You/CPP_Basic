// An example of implicit conversion 

#include <iostream> 
using namespace std;

void ImplicitConversion()
{
	int x = 10; // integer x 
	char y = 'a'; // character c 

	x = x + y;	// y implicitly converted to int. ASCII value of 'a' is 97 

	cout << "x = " << x << endl
		<< "y = " << y << endl;
}

void ExplicitConversion()
{

	double x = 1.2;
	int sum = (int)x + 1;	// Explicit conversion from double to int 
	cout << "Sum = " << sum<<endl;

	// using cast operator 
	float f = 3.5;
	int b = static_cast<int>(f);
	cout << "b = " << b<<endl;
}

//int main() {
//	ImplicitConversion();
//	//ExplicitConversion();
//
//	return 0;
//}