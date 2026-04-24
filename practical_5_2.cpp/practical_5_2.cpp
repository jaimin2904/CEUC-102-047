#include "practical_5_2.h"

void analyzeFile(ifstream& file, int& chars, int& words, int& lines)
{
    string line;

    while (getline(file, line))
    {
        lines++;

        int i = 0;
        int inword = 0;

        while (line[i] != '\0')
        {
            chars++;

            if (line[i] != ' ' && inword == 0)
            {
                words++;
                inword = 1;
            }
            else if (line[i] == ' ')
            {
                inword = 0;
            }

            i++;
        }

        chars++;
    }
}