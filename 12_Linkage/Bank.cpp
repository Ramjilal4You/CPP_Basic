//// C++ code to illustrate Internal-Linkage
#include <iostream>
using namespace std;

static int nBalanceAmount = 5000; // static linkage


static void BalanceAmount()
{
    cout << "Bank Balance Amount: " << nBalanceAmount << endl;
}

void PaySalaryToBankEmployee( int nSalary )
{
    cout << "-------------------------------------\n";
    BalanceAmount();

    nBalanceAmount = nBalanceAmount - nSalary;
    cout << "Amount deducted from Bank account: " << nSalary << endl;
    
    BalanceAmount();
    cout << "-------------------------------------\n";
}