#include <iostream>
#include <string>
#include "practical_5_3.h"

using namespace std;

int main()
{
    InventoryManager manager;
    int choice;
    string searchName;

    do
    {
        cout << "\n1.Add Item\n2.View All Items\n3.Search Item\n4.Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            manager.addItem();
        }
        else if (choice == 2)
        {
            manager.viewAll();
        }
        else if (choice == 3)
        {
            cout << "Enter item name to search: ";
            cin >> searchName;

            manager.searchItem(searchName);
        }

    } while (choice != 4);

    return 0;
}