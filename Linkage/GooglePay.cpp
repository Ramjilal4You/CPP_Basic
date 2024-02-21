// C code to illustrate External-Linkage
#include <iostream>
using namespace std;

extern int nBalanceAmount; // Now compiler knows that the variable is
                           // defined else where.
                           // Compiler just need to know the type.
void GooglePay( const int nAmountToPay )
{
    nBalanceAmount = nBalanceAmount - nAmountToPay;

    cout << "----------------Google Pay Reciept---------------------\n";
    cout << "Paid Amount : " << nAmountToPay << endl;
    cout << "Balance Amount : " << nBalanceAmount << endl;
    cout << "-------------------------------------\n";
}