#include<iostream>
using namespace std;

class bank_accound
{
private :
    long int no;
    string accound_holder_name;
    long long acct_balance;

public :
    void ca();
    int w(long int);
    int d(long int);
    int cb(long int);

};

void bank_accound::ca()
{
    cout<<" enter accound number:";
    cin>>no;
    cout<<"enter accound holder name:";
    cin>>accound_holder_name;
    cout<<"enter balance:";
    cin>>acct_balance;
}

int bank_accound::w(long int x)
{
    int amt;
    if(no==x)
    {
        cout<<"enter amount to deduct:";
        cin>>amt;

        if(acct_balance>=amt)
        {
            acct_balance=acct_balance-amt;
        }
        else
        {
            cout<<"low balance\n";
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

int bank_accound::d(long int x)
{
    int amt;
    if(no==x)
    {
        cout<<"enter amount to deduct:";
        cin>>amt;
        acct_balance=acct_balance+amt;
        return 1;
    }
    else
    {
        return 0;
    }
}

int bank_accound::cb(long int x)
{
    if(no==x)
    {
        cout<<"balance :"<<acct_balance<<endl;
        return 1;
    }
    else
    {
        return 0;

    }
}

int main()
{
    bank_accound b[50];
    int ch,last=0,i;
    long int an;

m:
    cout<< "1.CA 2.W 3.D 4.CB 5.EXIT\n";
        cin>> ch;

    switch(ch)
    {

    case 1:
        b[last].ca();
        last++;
        goto m;

    case 2:
        cout<<"enter accound number:";
        cin>> an;

        for(int i=0; i<last; i++)
        {
            if(b[i].w(an)==1)
                break;
        }
        if(i==last)
        {
            cout<<"account does not exist\n";
        }
        goto m;

    case 3:
        cout<<"enter accound number:";
        cin>> an;

        for(int i=0; i<last; i++)
        {
            if(b[i].d(an)==1)
                break;
        }
        if(i==last)
        {
            cout<<"account does not exist\n";
        }
        goto m;

    case 4:
        for(int i=0; i<last; i++)
        {
            if(b[i].cb(an)==1)
                break;
        }
        if(i==last)
        {
            cout<<"account does not exist\n";
        }
        goto m;
    case 5:
        break;
    default:
        cout <<"invalid choice";
    }
}
