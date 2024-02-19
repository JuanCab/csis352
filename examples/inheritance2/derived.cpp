#include "derived.h"

Derived::Derived(double value1, double value2) : Base(value1), Y(value2)
{
}

void Derived::setY(double value)
{
    Y = value;
}

double Derived::getY() const
{
    return Y;
}

void Derived::print() const
{
    Base::print();
    cout << "Y = " << getY() << endl;
}
