#include "functions.h"

int calculate(int n)
{
    if(n==0)
        return 0;

    int t;
    t=n%10;
    n=n/10;

    return t+calculate(n);
}