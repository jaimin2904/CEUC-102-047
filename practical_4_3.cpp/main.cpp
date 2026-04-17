#include<iostream>
#include "merge.h"

using namespace std;

int main()
{
    int n,m;
    cout<<"enter number n:";
    cin>>n;

    cout<<"enter number m:";
    cin>>m;

    int *a=new int[n];
    int *b=new int[m];
    int *c=new int[n+m];

    cout<<"enter array a:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"enter array b:";
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    mergeArray(a,n,b,m,c);

    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }

    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}