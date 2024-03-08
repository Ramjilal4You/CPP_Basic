///*** Manipulators are helping functions that can modify the input/output stream. ***/
//
//#include <iostream>	//cin,cout,flush,endl,ends,fixed, hex,oct
//#include <sstream>	//getline
//#include <string>	//string
//#include <iomanip>	//setfill,setw,setprecision,setbase
//
//using namespace std;
//
//int main()
//{
//	istringstream str("		 Programmer");
//	string line;
//	// Ignore all the whitespace in string str before the first word.
//	getline(str >> ws, line);	//getline(std::cin, line); -> take input from console
//	cout << line << endl;	
//
//	//flush
//	cout << "only a test" << flush;	// clean the buffer.
//
//	// Use of ends Manipulator
//	cout << "\na";
//	cout << "b" << ends;	// NULL character will be added in the Output
//	cout << "c" << endl;	// write a new line in the output stream.
//
//	//setw & setfill
//	int a, b;
//	a = 15;   b = 20;
//	cout << setfill('*') << endl;
//	cout << setw(5) << a;
//	cout << flush;
//	cout<< setw(5) << b << endl;
//
//	//setprecision & fixed
//	float A = 1.34255;
//	cout << fixed << setprecision(3) << A << endl;
//
//	//Setbase
//	int number = 100;
//	cout << "\nHex Value =" << " " << hex << number << endl;
//	cout << "Octal Value=" << " " << oct << number << endl;
//
//	cout << "Setbase Value=" << " " << setbase(8) << number << endl;
//	cout << "Setbase Value=" << " " << setbase(16) << number << endl;
//
//	return 0;
//}
