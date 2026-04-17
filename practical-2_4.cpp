#include<iostream>
using namespace std;
int last=0;


class item
{
    int id,q;
    string name;
    float price;

public:
    void input();
    int increas(int);
    int decreas(int);
    void validating_stock();
    int displaying_item(int);



    item()
    {

    }

    item(int a,string b,float c,int d)
    {
        id=a;
        name=b;
        price=c;
        q=d;

    }
};

int item::increas(int l)
{
    if(l==id)
    {
        return 1;

    }
   else
    {

        return 0;
    }

}

int item::decreas(int p)
{
    if(p==id)
    {
        return 1;
    }
    else
    {

        return 0;
    }

}

int item::displaying_item(int t)
{

    cout<<"\nid:"<<id;
    cout<<"\nname:"<<name;
    cout<<"\nprice:"<<price;
    cout<<"\nstock:"<<t;
}





int main()
{

    int idd,n,qq;
    string namee;
    float pricee;

m:
    cout<<"\n1.input\n2.increas\n3.decreas\n4.display\n";
    cout<<endl<<"enter number:";
    cin>>n;
    cout<<endl;

    item* c[10];

    switch(n)
    {

    case 1:

        for(int i=0; i<10; i++)
        {

            cout<<"enter item id:";
            cin>>idd;

            cout<<"enter name:";
            cin>>namee;

            cout<<"enter price:";
            cin>>pricee;

            cout<<"enter Quantity in stock:";
            cin>>qq;
            last++;

            c[i]= new item(idd,namee,pricee,qq);

            goto m;
        }

    case 2:
        int x,no;
        cout<<"enter id:";
        cin>>x;

        for(int i=0; i<last; i++)
        {
            if(c[i]->increas(x)==1)
            {
                cout<<"enter increas no:";
                cin>>no;

                qq=qq+no;
                cout<<"your final stock:";
                cout<<qq;
                cout<<"\ndone\n";
                break;
            }
            if(i==last-1)
            {
                cout<<"not valid id\n";

            }
        }
        goto m;

    case 3:
        int y,noo;
        cout<<"enter id";
        cin>>y;

        for(int i=0; i<last; i++)
        {
            if(c[i]->decreas(y)==1)
            {
                cout<<"enter decreas:";
                cin>>noo;

                qq=qq-noo;
                cout<<"your final stock:"<<qq;
                cout<<"\ndone\n";
                break;
            }
            if(i==last-1)
            {
                cout<<"not valid id\n";

            }

        }
        goto m;

    case 4:
        for(int i = 0; i<last; i++)
        {
            c[i]->displaying_item(qq);
            cout<<endl;
        }


    }

}
