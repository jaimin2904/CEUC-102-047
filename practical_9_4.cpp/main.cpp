#include <iostream>
#include <string>
#include "practical_9_4.h"

using namespace std;

int main()
{
    DirectoryManager dir;
    int choice;
    string folder, file;

    do
    {
        cout << "\n1.Add Folder\n2.Add File\n3.Display\n4.Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter folder name: ";
            cin >> folder;

            dir.addFolder(folder);
        }
        else if (choice == 2)
        {
            cout << "Enter folder name: ";
            cin >> folder;

            cout << "Enter file name: ";
            cin >> file;

            dir.addFile(folder, file);
        }
        else if (choice == 3)
        {
            dir.display();
        }

    } while (choice != 4);

    return 0;
}