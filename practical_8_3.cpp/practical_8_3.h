#ifndef PRACTICAL_8_3_H
#define PRACTICAL_8_3_H

#include <string>
using std::string;

extern string logs[100];
extern int logIndex;

void addLog(string msg);
void performTransaction(class BankAccount& acc, int choice, float amount);

class BankAccount
{
    float balance;

public:
    BankAccount(float b = 0);
    void deposit(float amount);
    void withdraw(float amount);
    float getBalance();
};

#endif