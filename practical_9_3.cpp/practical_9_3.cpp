#include "practical_9_3.h"

void addElements(set<int>& s, int n)
{
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }
}