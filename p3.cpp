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
int j,k;

void Rectangle::change()
{
    cout<<"enter L:";
    cin>>l;
    cout<<"enter b:";
    cin>>b;

}

void  Rectangle::area()
{

    cout<<"area:"<<l*b<<endl;
    cout<<"perimeter:"<<2*(l+b);

}



int main()
{
    int ch,index;
    Rectangle c[2];
    int last=0;
  c[last].change();
m:

    cout<<"\n1.value change\n2.area calculate\n3.exit\n";
    cout<<"\nenter your numbar:";
    cin>>ch;


    switch(ch)
    {
    case 1:
        cout<<"enter your index";
        cin>>index;

        c[index].change();
        goto m;

    case 2:
        c[index].area();
        goto m;
    case 3:
        break ;
    }

    c[0]
    c[1]
    x[2] =
    > error_category

    c[0].change()

    c[0].area
}
