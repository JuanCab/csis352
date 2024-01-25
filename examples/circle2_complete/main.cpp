// File:     main.cpp
// Author:   Dan Brekke with tweaks by Juan Cabanela

// Description
// This program will test the circle class

#include <iostream>
#include <iomanip>
#include "circle.h"
using namespace std;

int main()
{
   cout << showpoint << fixed << setprecision(2);

   cout << "Defining a circle with radius 3" << endl;
   Circle c1(3);
   cout << left << setw(14) << "radius" 
        << right << setw(10) << c1.radius() << endl;
   cout << left << setw(14) << "diameter" 
        << right << setw(10) << c1.diameter() << endl;
   cout << left << setw(14) << "area" 
        << right << setw(10) << c1.area() << endl;
   cout << left << setw(14) << "circumference" 
        << right << setw(10) << c1.circumference() << endl;
   cout << endl;

   cout << "Defining a circle then setting radius to 2" << endl;
   Circle c2;
   c2.setRadius(2);
   cout << left << setw(14) << "radius" 
        << right << setw(10) << c2.radius() << endl;
   cout << left << setw(14) << "diameter" 
        << right << setw(10) << c2.diameter() << endl;
   cout << left << setw(14) << "area" 
        << right << setw(10) << c2.area() << endl;
   cout << left << setw(14) << "circumference" 
        << right << setw(10) << c2.circumference() << endl;
   cout << endl;

// UNCOMMENT FOLLOWING CODE ONCE YOU HAVE THE OPERATORS DEFINED
   cout << "Are the two circles equal?  ";
   if (c1 == c2)
      cout << "equal" << endl;
   else
      cout << "not equal" << endl;

   cout << "Define a third circle as the sum of the first two" << endl;
   Circle c3;
   c3 = c1 + c2;
   cout << c3 << endl ;
   cout << endl;

   cout << "Set third circle equal to first, then set radius to 4.67 using = operator" << endl;
   c3 = c1;
   c3 = 4.67;
   cout << c3 << endl;
   cout << endl;

   cout << "Show precedence works by setting all three circles =4" << endl;
   c1 = c2 = c3 = 4;
   cout << "c1 has ";
   cout << c1 << endl;
   cout << "c2 has ";
   cout << c2 << endl;
   cout << "c3 has ";
   cout << c3 << endl;
   cout << endl;

   cout << "Set radius of third circle to 5" << endl;
   c3.setRadius(5);
   cout << c3 << endl;
   return 0;
}
