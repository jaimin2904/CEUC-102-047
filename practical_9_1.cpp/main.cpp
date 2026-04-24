#include <iostream>
#include <vector>
#include "practical_9_1.h"

using namespace std;

int main()
{
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    reverseVector(v);

    cout << "\nReversed using std::reverse(): ";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    reverseManually(v);

    cout << "\nReversed manually using iterators: ";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}