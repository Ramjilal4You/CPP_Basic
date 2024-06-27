//// C++ code to illustrate Internal-Linkage
#include <iostream>
using namespace std;

static int nBalanceAmount = 3000;  // static linkage

static void BalanceAmount()
{
    cout << "Software company Balance Amount: " << nBalanceAmount << endl;
}

void PaySalaryToSoftwareEngineer( int nSalary )
{
    cout << "-------------------------------------\n";
    BalanceAmount();

    nBalanceAmount = nBalanceAmount - nSalary;
    cout << "Amount deducted from Software company account: " << nSalary << endl;

    BalanceAmount();

    cout << "-------------------------------------\n";
}