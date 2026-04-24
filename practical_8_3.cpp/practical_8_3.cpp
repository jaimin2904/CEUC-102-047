#include "practical_8_3.h"

string logs[100];
int logIndex = 0;

void addLog(string msg)
{
    logs[logIndex++] = msg;
}

BankAccount::BankAccount(float b)
{
    balance = b;
}

void BankAccount::deposit(float amount)
{
    addLog("Entered deposit()");

    if (amount <= 0)
    {
        throw "Invalid deposit amount!";
    }

    balance += amount;
    addLog("Deposit successful");

    addLog("Exiting deposit()");
}

void BankAccount::withdraw(float amount)
{
    addLog("Entered withdraw()");

    if (amount > balance)
    {
        throw "Insufficient balance!";
    }

    if (amount <= 0)
    {
        throw "Invalid withdrawal amount!";
    }

    balance -= amount;
    addLog("Withdrawal successful");

    addLog("Exiting withdraw()");
}

float BankAccount::getBalance()
{
    return balance;
}

void performTransaction(BankAccount& acc, int choice, float amount)
{
    addLog("Entered performTransaction()");

    if (choice == 1)
    {
        acc.deposit(amount);
    }
    else if (choice == 2)
    {
        acc.withdraw(amount);
    }
    else
    {
        throw "Invalid choice!";
    }

    addLog("Exiting performTransaction()");
}