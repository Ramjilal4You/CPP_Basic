// C++ program to demonstrate use of foreach for array
#include <iostream>
using namespace std;

void foreachForArray()
{
	int arr[] = { 10, 20, 30, 40 };

	// Printing elements of an array using foreach loop 
	// Here, int is the data type, x is the variable name 
	// and arr is the array for which we want to iterate foreach
	cout << "Traversing the array with foreach using array's data type: ";
	for (int x : arr)
		cout << x << " ";

	// data type of x is set as int
	cout << "\nTraversing the array with foreach using auto keyword	 : ";
	for (auto x : arr)
		cout << x << " ";
}

#include <vector>
void foreachForVector()
{
	vector<string> value{ "This",    "is",    "foreach",
						  "example", "using", "vector." };

	cout << "\n\nTraversing the vector with foreach using vector's data type: ";

	for (string v : value)
		cout << v << " ";

	cout << "\nTraversing the vector with foreach using auto keyword      : ";

	for (auto v : value)
		cout << v << " ";

}

#include <set>
void foreachForSet() {

	set<int> value = { 6, 2, 7, 4, 10, 5, 1, 1 };

	cout << "\n\nTraversing the set with foreach using set's data type: ";
	for (int v : value) {
		cout << v << " ";
	}

	cout << "\nTraversing the set with foreach using auto keyword : ";
	for (auto v : value)
		cout << v << " ";
}


#include <map>
void foreachForMap() {

	map<int, string> mapExample;
	mapExample.insert(pair<int, string>(1, "Ramjilal"));
	mapExample.insert(pair<int, string>(5, "Foreach"));
	mapExample.insert(pair<int, string>(3, "You"));
	mapExample.insert(pair<int, string>(4, "Map"));
	mapExample.insert(pair<int, string>(6, "Example"));
	mapExample.insert(pair<int, string>(2, "4"));

	cout << "\n\nTraversing the map with foreach using map's data type\n";
	for (pair<int, string> mpEx : mapExample) {
		cout << mpEx.first << " " << mpEx.second << endl;
	}

	cout << "\nTraversing the map with foreach using auto keyword\n";
	for (auto mpEx : mapExample) {
		cout << mpEx.first << " " << mpEx.second << endl;
	}
}

//int main() 
//{
//	foreachForArray();
//	foreachForVector();
//	foreachForSet();
//	foreachForMap();
//
//	cout << endl;
//	return 0;
//}
