#include "car.h"

fuel::fuel()
{
    cout<<"enter type of fual:";
    cin>>type;
}

brand::brand()
{
    cout<<"enter model of the vehicle:";
    cin>>model;

    cout<<"enter brand name of the vehicle:";
    cin>>brandname;
}

void car::display()
{
    cout<<"type:"<<type<<endl
        <<"model:"<<model<<endl
        <<"brandname:"<<brandname<<endl;
}