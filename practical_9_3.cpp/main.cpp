#include <iostream>
#include <set>
#include "practical_9_3.h"

using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    set<int> s;

    cout << "Enter elements:\n";
    addElements(s, n);

    cout << "\nUnique elements:\n";

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}