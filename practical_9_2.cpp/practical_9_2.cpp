#include "practical_9_2.h"
#include <sstream>

void countWordFrequency(const string& line, map<string, int>& m)
{
    string word;
    stringstream ss(line);

    while (ss >> word)
    {
        m[word]++;
    }
}