#include <iostream>
#include <iomanip>
#include "practical_5_4.h"

using namespace std;

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    StudentManager students[100];

    for (int i = 0; i < n; i++)
    {
        students[i].addStudent();
    }

    for (int i = 0; i < n; i++)
    {
        students[i].displayAll(n);
    }

    return 0;
}