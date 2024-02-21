// C++ code to illustrate No-Linkage
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