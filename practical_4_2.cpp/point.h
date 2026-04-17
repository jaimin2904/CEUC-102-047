#ifndef POINT_H
#define POINT_H

#include<iostream>
using namespace std;

class point
{
    int x;
    int y;

public:

    int z;
    int w;

    point(int a=0,int b=0);

    point& abc(int dx,int dy);

    void display();

    friend void reset(point *p);
};

#endif