#include<iostream>

using namespace std;
int no,last=0;
class Savings_Account
{
    int id;
    string name;
    long int balance;

public:
    void creat_account();
    int deposit_money(int);
    int withdraw_money(int);
    void displaying_full_account();

};
void Savings_Account::creat_account()
{
    cout<<"enter Customer name:";
    cin>>name;

    cout<<"account ID:";
    cin>>id;

    cout<<"Current balance:";
    cin>>balance;
    cout<<endl;
}
int Savings_Account::deposit_money(int no)
{
    long int ba;
    if(id==no)
    {
        cout<<"enter deposit money:";
        cin>>ba;
        balance=balance+ba;
        return 1;
    }
    else
    {
        return 0;

    }

}

int Savings_Account::withdraw_money(int no)
{
    long int ba;
    if(id==no)
    {

        cout<<"enter withdraw money:";
        cin>>ba;
        if(ba<balance)
        {

            balance=balance-ba;
            return 1;
        }
        else
        {
            cout<<"not valid balance\n";
        }
    }
    else
    {
        return 0;
    }

}
void Savings_Account::displaying_full_account()
{
    cout<<"Customer name:"<<name<<endl;
    cout<<"Customer id:"<<id<<endl;
    cout<<"Customer balance:"<<balance<<endl;

}





int main()
{
    int n;


    Savings_Account a[100];

m:
    cout<<"1.creat account\n2.deposit money\n3.withdraw money\n4.display all data\n";
    cout<<"enter number:";
    cin>>n;
    cout<<endl;

    switch(n)
    {
    case 1:
        a[last].creat_account();
        last++;
        cout<<endl;
        goto m;

    case 2:
        cout<<"enter account number:";
        cin>>no;
        for(int i=0; i<last; i++)
        {
            if(a[i].deposit_money(no)==1)
            {
                cout<<"your diposit is successful\n";
                break;
            }
            if(i==last-1)
            {
                cout<<"this account is not found\n";
                break;
            }
        }
        cout<<endl;
        goto m;
    case 3:
        cout<<"enter account number:";
        cin>>no;

        for(int i=0; i<last; i++)
        {
            if(a[i].withdraw_money(no)==1)
            {
                cout<<"your withdraw is successful\n";
                break;
            }
            if(i==last-1)
            {
                cout<<"this account is not found\n";
                break;
            }
        }
        cout<<endl;
        goto m;
    case 4:
        for(int i=0; i<last; i++)
        {
            a[i].displaying_full_account();
            cout<<endl;

        }


    }


}
