#include<iostream>

using namespace std;

class payroll_system
{
    string name;
    double basic_salary;
    double bonus_amount;
    double total_salary;

public :

    payroll_system inputdata();
    void displaydata();
    inline void calculater(double ba,double bs)
    {

        total_salary = ba+ bs;

    }

    payroll_system()
    {
        bonus_amount=20;
    }

    payroll_system(string n,double bs,double ba,double ts)
    {
        name=n;
        basic_salary=bs;
        bonus_amount=ba;
        total_salary=ts;

    }


};

payroll_system payroll_system::inputdata()
{
    string nn;
    double bbs,bba;
    cout<<"enter name:";
    cin>>nn;

    cout<<"enter salary:";
    cin>>bbs;

    cout<<"enter bonus amount:";
    cin>>bba;

    calculater(bbs,bba);

    return payroll_system(nn,bbs,bba,total_salary);

}

void payroll_system::displaydata()
{

    cout<<"name:"<<name<<endl;
    cout<<"bonus amount:"<<bonus_amount<<endl;
    cout<<"total salary:"<<total_salary<<endl;
}

int main()
{
    int n,ch,last=0;
    payroll_system c[10];



m:
    cout<<"1.add amployee data\n2.display data\n3.exit\n";
    cout<<"enter number:";
    cin>>ch;



    switch(ch)
    {
    case 1:

        c[last]=c[last].inputdata();
        last++;
        goto m;

    case 2:

        for(int i=0; i<last; i++)
        {
            c[i].displaydata();
        }
        goto m;

    case 3:
        break;


    }
    return 0;

}
