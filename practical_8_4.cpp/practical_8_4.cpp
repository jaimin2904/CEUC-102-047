#include "practical_8_4.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

bool openFile(ifstream& file, string& filename)
{
    bool opened = false;

    while (!opened)
    {
        cout << "Enter file path (or type exit to quit): ";
        cin >> filename;

        if (filename == "exit")
        {
            cout << "Program terminated." << endl;
            return false;
        }

        file.open(filename);

        if (file.is_open())
        {
            opened = true;
        }
        else
        {
            cout << "Error: File cannot be opened. Try again.\n";
        }
    }
    return true;
}

void processFile(ifstream& file, float& totalSum, int& validLines)
{
    string line;
    int lineNumber = 0;
    totalSum = 0;
    validLines = 0;

    while (getline(file, line))
    {
        lineNumber++;
        stringstream ss(line);
        float num;
        float lineSum = 0;
        bool valid = true;

        while (ss >> num)
        {
            lineSum += num;
        }

        if (ss.fail() && !ss.eof())
        {
            valid = false;
        }

        if (valid)
        {
            cout << "Line " << lineNumber << " Sum = " << lineSum << endl;
            totalSum += lineSum;
            validLines++;
        }
        else
        {
            cout << "Line " << lineNumber << " is corrupted: " << line << endl;
        }
    }

    file.close();
}
