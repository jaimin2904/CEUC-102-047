#include<iostream>
#include<math.h>

using namespace std;
int t=0;

int calculate(int n)
{
    if(n==0)
        return 0;

    int t;
    t=n%10;
    n=n/10;

    return t+calculate(n);

}

int main()
{
    int n,k,ans,y=0;

    cout<<"enter number:";
    cin>>n;

    cout<<"enter k:";
    cin>>k;

    int u=n;
    int r=n;
    while(u>0)
    {
        y++;
        u=u/10;
    }

    for(int i=1;i<k;i++)
    {
        n=n*pow(10,y)+r;
    }

    cout<<"your number:"<<n<<endl;

    do
    {

        n=calculate(n);

    }
    while(n>=10);

    cout<<n;
}
