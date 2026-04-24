#include <iostream>
#include "practical_8_2.h"

using namespace std;

int main()
{
    int x, y;

    try
    {
        cout << "x:";
        cin >> x;

        if (cin.fail())
        {
            throw "invalid input";
        }
        cout << "y:";
        cin >> y;

        if (cin.fail())
        {
            throw "invalid input";
        }

        cout << divide(x, y);
    }

    catch (const char* msg)
    {
        cout << msg;
    }

    return 0;
}