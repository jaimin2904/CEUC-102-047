#include <iostream>
#include <fstream>
#include "practical_8_4.h"
using namespace std;

int main()
{
    ifstream file;
    string filename;
    float totalSum;
    int validLines;

    if (!openFile(file, filename))
    {
        return 0;
    }

    processFile(file, totalSum, validLines);


    cout << "Valid lines: " << validLines << endl;
    cout << "Total Sum: " << totalSum << endl;

    if (validLines > 0)
    {
        cout << "Average per line: " << totalSum / validLines << endl;
    }

    return 0;
}
