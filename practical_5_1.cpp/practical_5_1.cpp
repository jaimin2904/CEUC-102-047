#include "practical_5_1.h"

void countWordFrequency(const string& line, string unique[], int freq[], int& u)
{
    string words[100];
    int j = 0;

    int i = 0;
    while (line[i] != '\0')
    {
        string temp = "";

        while (line[i] != ' ' && line[i] != '\0')
        {
            temp += line[i];
            i++;
        }

        if (temp != "")
        {
            words[j++] = temp;
        }

        i++;
    }

    u = 0;

    for (i = 0; i < j; i++)
    {
        int found = 0;

        for (int k = 0; k < u; k++)
        {
            if (unique[k] == words[i])
            {
                freq[k]++;
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            unique[u] = words[i];
            freq[u] = 1;
            u++;
        }
    }
}