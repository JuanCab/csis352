#include <iostream>
#include "circle.h"
#include "coloredcircle.h"
using namespace std;

void func(Circle *p) 
{
    // polymorphism: Display is virtual in Circle
    p->Display();
}

void func2(const Circle &c)
{
    c.Display();
}

int main()
{
    Circle c(3);
    ColoredCircle cc(5, blue);
    Circle *p;

    // Circle object display using several methods
    p = &c;
    p->Display();
    func(p);
    func2(*p);
    cout << "------------------\n";

    // ColoredCircle object display using several methods
    p = &cc;
    p->Display();
    func(p);
    func2(*p);
    cout << "------------------\n";

    // Call fuctions with Circle and ColoredCircle objects
    // directly (for func2) and by pointer (for func)
    func(&c);
    func2(c);
    func(&cc);
    func2(cc);
    return 0;
}
