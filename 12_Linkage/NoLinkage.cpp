/*** No Linkage ***/
/*

* Names not specified with external/internal linkage -> have no linkage.
* After compilation, there is no such name(with no linkage) exists in program.

*/
#include <iostream>
using namespace std;

void FDBalance()
{
   int Amount = 50000; // No linkage
   cout << "Fixed Deposit Balance " << Amount << endl;
}

void CarLoan()
{
    int Amount = 25000; // No linkage
    cout << "Car Loan " << Amount << endl;
}

//int main()
//{
//	  cout << "------------No Linkage : NoLinkage::main()-------------\n\n"; 
//    FDBalance();
//    CarLoan();
//    return 0;
//}