#include <iostream>
#include "practical_8_3.h"

using namespace std;

int main()
{
    BankAccount acc(1000);
    int choice;
    float amount;

    try
    {
        addLog("Entered main()");

        cout << "1. Deposit\n2. Withdraw\nEnter choice: ";
        cin >> choice;

        cout << "Enter amount: ";
        cin >> amount;

        performTransaction(acc, choice, amount);

        cout << "Transaction Successful!" << endl;
        cout << "Current Balance: " << acc.getBalance() << endl;

        addLog("Exiting main()");
    }
    catch (const char* msg)
    {
        cout << "Exception: " << msg << endl;
        addLog("Exception caught in main()");
    }

    for (int i = 0; i < logIndex; i++)
    {
        cout << logs[i] << endl;
    }

    return 0;
}
