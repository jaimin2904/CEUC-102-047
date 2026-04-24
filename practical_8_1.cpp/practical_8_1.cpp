#include "practical_8_1.h"

int divide(int x, int y)
{
    if (y == 0)
    {
        throw "error division by zero is not allowed";
    }
    return x / y;
}