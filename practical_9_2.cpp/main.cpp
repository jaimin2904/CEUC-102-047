#include <iostream>
#include <string>
#include <map>
#include "practical_9_2.h"

using namespace std;

int main()
{
    string line;

    cout << "Enter a sentence: ";
    getline(cin, line);

    map<string, int> m;

    countWordFrequency(line, m);

    cout << "\nWord Frequency:\n";

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}