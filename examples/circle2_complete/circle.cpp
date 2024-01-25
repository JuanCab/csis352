// File:     circle.cpp
// Author:   Dan Brekke with tweaks by Juan Cabanela

// Description
// This file contains the implementation for a circle class

#include "circle.h"

Circle::Circle(double r)
{
   setRadius(r);
}

void Circle::setRadius(double r)
{
   rad = r;
}

double Circle::radius() const
{
   return rad;
}

double Circle::diameter() const
{
   return radius()*2;
}

double Circle::area() const
{
   return PI*radius()*radius();
}

double Circle::circumference() const
{
   return 2*PI*radius();
}

bool Circle::operator==(const Circle& c) const
{
   return radius() == c.radius();
}

bool Circle::operator<(const Circle& c) const
{
   return radius() < c.radius();
}

bool Circle::operator<=(const Circle& c) const
{
   return *this == c || *this < c;
}

Circle Circle::operator+(const Circle& c) const
{
   Circle temp(radius()+c.radius());
   return temp;
}

const Circle& Circle::operator=(double d)
{
   setRadius(d);
   return *this;
}

istream& operator>>(istream& i, Circle& c)
{
   double temp;
   i >> temp;
   c.setRadius(temp);
   return i;
}

ostream& operator<<(ostream& o,const Circle& c)
{
  o << "Radius: " << c.radius() << "  ";
  o << "Diameter: " << c.diameter() << "  ";
  o << "Circumference: " << c.circumference() << "  ";
  o << "Area: " << c.area() << "  ";
  return o;
}
