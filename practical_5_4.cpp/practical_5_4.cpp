#include "practical_5_4.h"
#include <iostream>
#include <iomanip>
using namespace std;

std::ostream& currency(std::ostream& out)
{
    out << "Rs ";
    return out;
}

void StudentManager::addStudent()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks: ";
    cin >> marks;
    cout << "Enter fees: ";
    cin >> fees;
}

void StudentManager::displayAll(int n) const
{
    cout << "\n" << setw(15) << setfill(' ') << "Name"
         << setw(10) << "Marks"
         << setw(15) << "Fees" << endl;

    cout << setfill('-') << setw(40) << "" << setfill(' ') << endl;

    cout << setw(15) << name
         << setw(10) << fixed << setprecision(2) << marks
         << setw(10) << currency << fixed << setprecision(2) << fees
         << endl;
}