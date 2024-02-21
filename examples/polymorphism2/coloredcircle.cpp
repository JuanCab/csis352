#include <iostream>
#include "coloredcircle.h"

ColoredCircle::ColoredCircle(double r, colors c) : Circle(r)
{
    color = c; // could have been put in the initializer list
}

ColoredCircle::ColoredCircle(colors c) : Circle(0)
{
    setColor(c);
}

ColoredCircle::ColoredCircle(const Circle &c) : Circle(c.Radius())
{
    cout << "in ColoredCircle copy constructor\n";
    color = black;
}

ColoredCircle &ColoredCircle::operator=(const Circle &c)
{
    cout << "in ColoredCircle operator=\n";
    setRadius(c.Radius());
    return *this;
}

void ColoredCircle::operator=(Circle *c)
{
    *this = c;
}

void ColoredCircle::setColor(colors c)
{
    color = c;
}

colors ColoredCircle::Color() const
{
    return color;
}

void ColoredCircle::Display() const
{
    cout << "radius=" << Radius() << "   color=" << Color() << endl;
}
