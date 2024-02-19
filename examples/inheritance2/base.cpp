#include <iostream>
#include "base.h"

Base::Base(double value) : X(value)
{
}

void Base::setX(double value)
{
    X = value;
}

double Base::getX() const
{
    return X;
}

void Base::print() const
{
    cout << "X = " << getX() << endl;
}
