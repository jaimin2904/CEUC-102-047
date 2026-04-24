#include "practical_9_1.h"
#include <algorithm>

void reverseVector(vector<int>& v)
{
    std::reverse(v.begin(), v.end());
}

void reverseManually(vector<int>& v)
{
    auto start = v.begin();
    auto end = v.end() - 1;

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}