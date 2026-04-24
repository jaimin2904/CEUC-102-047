#include <iostream>
#include <fstream>
#include "practical_5_2.h"

using namespace std;

int main()
{
    ifstream file;
    string filename;

    int chars = 0, words = 0, lines = 0;

    cout << "Enter file name: ";
    cin >> filename;

    file.open(filename);

    if (!file)
    {
        cout << "File cannot be opened";
        return 0;
    }

    analyzeFile(file, chars, words, lines);

    file.close();

    cout << "\nLines: " << lines;
    cout << "\nWords: " << words;
    cout << "\nCharacters: " << chars;

    return 0;
}