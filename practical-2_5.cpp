#include <iostream>
#include<math.h>

using namespace std;

class loan_account
{
    private:
        int id;
        string name;
        double amount;
        int tenure;
        float rate;
        float EMI;
        int cid=1;
        int emi_calculater(float,double,int);

    public:
        loan_account();
        loan_account(string,double,int);
        int display(int,float,string,double,int);
        int insertdata(int,float);
};


string n;
int t;
double a;

loan_account::loan_account()
{
    id=cid++;
    rate=7.5;
}

loan_account::loan_account(string n,double a,int t)
{
    id=cid++;
    rate=7.5;
    name=n;
    amount=a;
    tenure=t;
}

 int loan_account::insertdata(int id,float rate)
 {
     cout<<"enter your name:";
     cin>>n;

     cout<<"enter your amount:";
     cin>>a;

     cout<<"enter your tenure:";
     cin>>t;
 }

    int loan_account::emi_calculater(float rate,double a,int t)
     {
        EMI = (a * rate * pow(1 + rate, t)) / (pow(1 + rate, t) - 1);

     }




int display(int i,float r,string n,double a,int t)
 {
     cout<<i<<endl<<r<<endl<<n<<endl<<a<<endl<<t<<endl;
 }

 int main()
{
    int n;
m:
    cout<<"1.creataccount\n2.loan\n3.dispaly";
    cout<<"\nenter number";
    cin>>n;

    switch(n)
    {
    case 1:
             loan_account();
             goto m;
    case 2:
            int insertdata(cid,rate);
            goto m;
    case 3:
           int display(int,float,string,double,int);
           goto m;


    }


}

