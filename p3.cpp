#include<iostream>
using namespace std;

class Rectangle
{
private :
    int l,b;
public :
    void change();
    void area();

};
int j,k,last=0;

void Rectangle::change()
{
    cout<<"enter L:";
    cin>>l;
    cout<<"enter b:";
    cin>>b;
    last++;
}

void  Rectangle::area()
{

    cout<<"area:"<<l*b<<endl;
    cout<<"perimeter:"<<2*(l+b)<<endl;

}



int main()
{
    int ch,index=0;
    Rectangle c[1];
   // int last=0;
  c[last].change();
m:

    cout<<"\n1.value change\n2.area calculate\n3.exit\n";
    cout<<"\nenter your numbar:";
    cin>>ch;


    switch(ch)
    {
    case 1:
        cout<<"enter your index:";
        cin>>index;
    if(index < last)

    {
        c[index].change();
        goto m;
    }
    else
    {
        cout<<"this index is not found\n";
        goto m;
    }

    case 2:
        c[index].area();
        goto m;
    case 3:
        break ;
    }


}
