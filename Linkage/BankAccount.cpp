// C++ code to illustrate External-Linkage
#include <iostream>
using namespace std;

int nBalanceAmount = 100000; // Actual defintion

void DisplayBankBalance()
{
    cout << "----------------Balance Reciept---------------------\n";
    cout << "Bank Balance : %d\n" << nBalanceAmount << endl;
    cout << "-------------------------------------\n";
}