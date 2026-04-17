#include <iostream>
#include<windows.h>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    float m1, m2, m3;

public:

  Student()
    {
        name = "jaimin";
        roll = 47;
        m1 = m2 = m3 = 99;
    }

    Student(string n, int r, float s1, float s2, float s3)
    {
        name = n;
        roll = r;

        m1 = (s1 >= 0 && s1 <= 100) ? s1 : 0;
        m2 = (s2 >= 0 && s2 <= 100) ? s2 : 0;
        m3 = (s3 >= 0 && s3 <= 100) ? s3 : 0;
    }

    void display()
    {
        float avg = (m1 + m2 + m3) / 3;
        cout<<"\nroll:"<<roll;
        cout<<"\nname:"<<name;
        cout<<"\navg:"<<avg;

    }
};

int main()
{
    string name;
    float m1,m2,m3;
    int id,n,ch;

    cout<<"enter number of studen:";
    cin>>n;

    cout<<"1.input data\n2.default data";
    cout<<"enter number\n";
    cin>>ch;

     Student* records[n];

    switch(ch)
    {
   case 1:
    for(int i=0;i<n;i++)
    {
    cout<<"enter your name:";
    cin>>name;

    cout<<"entre id:";
    cin>>id;

    cout<<"enter three subject marks:";
    cin>>m1>>m2>>m3;

    records[i]= new Student(name,id,m1,m2,m3);
    }

    system("cls");

    for(int i = 0; i<n; i++)
    {
         records[i]->display();
         cout<<endl;
    }

    case 2:
    for(int i = 0; i<n; i++)
    {
       records[i] = new Student();
    }

     for(int i = 0; i<n; i++)
    {
        records[i]->display();
         cout<<endl;
    }

    }
    return 0;
}
