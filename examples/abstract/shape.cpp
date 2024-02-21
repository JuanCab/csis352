#include <iostream>
#include "shape.h"

using namespace std;

Shape::Shape(int xValue, int yValue)
{
    x = xValue;
    y = yValue;
}

void Shape::Display() const
{
    cout << '[' << x << ',' << y << ']';
}
