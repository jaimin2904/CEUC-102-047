#include <iostream>
#include <string>
#include "practical_5_1.h"

using namespace std;

int main()
{
    string line;
    string unique[100];
    int freq[100] = {0};

    cout << "Enter paragraph:\n";
    getline(cin, line);

    for (int i = 0; line[i] != '\0'; i++)
    {
        if (line[i] >= 'A' && line[i] <= 'Z')
        {
            line[i] = line[i] + 32;
        }
    }

    int u = 0;
    countWordFrequency(line, unique, freq, u);

    cout << "\nWord Frequency:\n";

    for (int i = 0; i < u; i++)
    {
        cout << unique[i] << " : " << freq[i] << endl;
    }

    return 0;
}