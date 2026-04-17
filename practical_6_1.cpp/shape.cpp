#include "shape.h"

void Shape::setRadius(float r)
{
    radius = r;
}

float Circle::area()
{
    return 3.14 * radius * radius;
}

void Circle::display()
{
    cout << "Area = " << area() << endl;
}