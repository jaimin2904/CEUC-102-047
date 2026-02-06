#include<iostream>

using namespace std;
class library_system
{
private:
    int id,nb;
    string title;
    string author;

public:
    void addbooks();
    int issubook(string);
    int returnbook(string);
    void disbook();

};


void library_system::addbooks()
{

    cout<<"enter book title:";
    cin>>title;

    cout<<"enter book id:";
    cin>>id;


    cout<<"enter book's author name:";
    cin>>author;
    cout<<endl;

}

int library_system::issubook(string x)
{
    if(title==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int library_system::returnbook(string x)
{
    if(title==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}










int main()
{
    library_system c[50];
    int ch,last=0;
    string book;
    string name,na;
m:

    cout<<"\n1.addbook\n2.issubook\n3.returnbook\n4.displaybook\n";
    cout<<"enter select option:";
    cin>>ch;

    switch(ch)
    {
    case 1:
        c[last].addbooks();
        last++;
        goto m;

    case 2:
        cout<<"enter book's name:";
        cin>>name;
        for(int i=0; i<last; i++)
        {
            if(c[i].issubook(name)==1)
            {
                cout<<"your book issued";
                break;
            }
            if(c[i].issubook(name)==0)
            {
                cout<<"book not avalible\n";
            }
        }
        goto m;
    case 3:


        cout<<"enter book's name:";
        cin>>na;

        for(int i=0; i<last; i++)
        {
            if(c[i].returnbook(name)==1)
            {
                cout<<"your book's return";
                break;
            }
            if(i==last)
            {
                cout<<"book does not exist\n";
            }
            goto m;
        }

        /*   case 4:
               for(int i=0;i<last;i++)
               {
                   c[i].disbook();
               }*/

    }
}
