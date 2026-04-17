#include <iostream>
#include <string.h>

using namespace std;

class bank
{
    int no;
    static int x;
    string name;
    int balance;

public:
    void inputdata();
    int searchs(int);
    int transfer(int);
    void add(int);
    void display();
};

int bank::x=1;

void bank::inputdata()
{
    cout<<"enter your name:";
    cin>>name;

    cout<<"enter your balance:";
    cin>>balance;

    no=x++;

    cout<<"your account number:"<<no<<endl;

}

int bank::searchs(int z)
{
    if(no==z)
    {
        return 1;
    }
    else
    {
        return 0;

    }

}

int bank::transfer(int m)
{
    if(m<=balance)
    {
        balance-=m;
        cout<<"sussesfull";

        return 1;

    }
    else
    {
        cout<<"not valid money";
    }

}

void bank::add(int m)
{
        balance+=m;

}

void bank::display()
{
    cout<<endl<<name<<endl<<no<<endl<<balance;
}


int main()
{
    int n,c,i;

    cout<<"enter number of account:";
    cin>>n;
    bank *p= new bank[n];

m:
    cout<<"\n1.input\n2.transfer\n3.display\n4.exit\n";
    cin>>c;


    switch(c)
    {

    case 1:

        for(i=0; i<n; i++)
        {
            p[i].inputdata();
            cout<<endl;
        }
        goto m;

    case 2:
        int ac,acc,money;

        cout<<"enter account number(withdraw):";
        cin>>ac;

        cout<<"enter account number(add):";
        cin>>acc;

        for(i=0; i<n; i++)
        {
            if(p[i].searchs(ac)==1 && acc<=n && acc>0)
            {
                cout<<"enter transfe money:";
                cin>>money;

               if(p[i].transfer(money)==1)
               {
                   p[acc-1].add(money);
               }



                break ;
            }
            else if(i>=n-1)
            {
                cout<<"not valid account"<<endl;
                break ;

            }
            else
            {

            }

        }
        goto m;

    case 3:

        for(int i=0; i<n; i++)
        {
            p[i].display();
        }
        goto m;

    case 4:

        break ;


    }

}
