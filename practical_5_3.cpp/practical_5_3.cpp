#include "practical_5_3.h"
#include <iostream>
#include <fstream>
using namespace std;

void InventoryManager::addItem()
{
    ofstream file("inventory.txt", ios::app);

    string n;
    int q;
    float p;

    cout << "Enter item name: ";
    cin >> n;
    cout << "Enter quantity: ";
    cin >> q;
    cout << "Enter price: ";
    cin >> p;

    file << n << " " << q << " " << p << endl;

    file.close();

    cout << "Item added";
}

void InventoryManager::viewAll() const
{
    ifstream file("inventory.txt");
    string n;
    int q;
    float p;

    cout << "\nItems:\n";

    while (file >> n >> q >> p)
    {
        cout << n << " " << q << " " << p << endl;
    }

    file.close();
}

void InventoryManager::searchItem(const string& searchName) const
{
    ifstream file("inventory.txt");
    string n;
    int q;
    float p;
    int found = 0;

    while (file >> n >> q >> p)
    {
        if (n == searchName)
        {
            cout << "Found: " << n << " " << q << " " << p << endl;
            found = 1;
        }
    }

    if (found == 0)
    {
        cout << "Item not found";
    }

    file.close();
}