#include <iostream>
#include <list>
#include "circle.h"
#include "coloredcircle.h"
using namespace std;

int main()
{
    // Create list of Circle pointers and iterator
    list<Circle*> cirList;
    list<Circle*>::iterator it;

    // Create some circles and colored circles
    Circle *p; // pointer to Circle for later
    Circle c1(3);
    Circle c2(7);
    Circle c3(2);
    Circle c4(6);
    ColoredCircle cc1(5, blue);
    ColoredCircle cc2(1, green);

    // populate the linked list with pointers to Circle and ColoredCircle objects
    cirList.push_back(&c1);
    cirList.push_back(&cc1);
    cirList.push_back(&c2);
    cirList.push_back(&c3);
    cirList.push_back(&cc2);
    cirList.push_back(&c4);

    // output the list
    for (it = cirList.begin(); it != cirList.end(); it++)
    {
        p = *it; // get the pointer
        p->Display(); // call the Display method
    }
    return 0;
}
