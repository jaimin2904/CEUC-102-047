#include "shape.h"

int main()
{
    Circle c[10];
    int n;

    cout << "Enter number of circles: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        float r;
        cout << "Enter radius: ";
        cin >> r;
        c[i].setRadius(r);
    }

    cout << "\nAreas:\n";
    for(int i = 0; i < n; i++)
    {
        c[i].display();
    }

    return 0;
}