#include <iostream>
using namespace std;
#include "arrayIterator.h"

void output(arrayIterator<int> p)
{
    // Loop through the array and print each element
    for (int i=0; i<5; i++)
        cout << *p++ << ' ';
    cout << endl;
}

int main()
{
    int numbers[] = {1,2,3,4,5};
    arrayIterator<int> p(numbers);
    arrayIterator<int> p2(numbers);

    // Loop through the array and print each element
    cout << "Print out contents of p" << endl;
    for (int i=0; i<5; i++)
        cout << *p++ << ' ';
    cout << endl;

    // Do this again by calling a function
    cout << "Calling output() to print out contents of p" << endl;
    output(numbers);

    cout << "Set p=p2=numbers" << endl;
    p = p2 = numbers; // p and p2 are now pointing to the same array of int
    cout << "Print out contents of p using output()" << endl;
    output(p);

    cout << "Print out contents of p" << endl;
    for (int i=0; i<5; i++)
        cout << *p++ << ' ';
    cout << endl;

    cout << "Print out contents of p2 and change its contents" << endl;
    for (int i=0; i<3; i++)
    {
        cout << *p2 << ' ';
        p2=p2+2;
    }
    cout << endl;

    cout << "Print out contents of p" << endl;
    for (p=numbers; p!=numbers+5; p++)
        cout << *p << ' ';
    cout << endl;
    cout << "Print out contents of p2" << endl;
    for (p2=numbers; p2!=p; p2++)
        cout << *p2 << ' ';
    cout << endl;

    cout << "Print out *p after p=numbers" << endl;
    p = numbers;
    cout << *p << endl;
    *p = 99;

    cout << "Print out p after setting *p=99 when it pointed at numbers" << endl;
    for (p=numbers; p!=numbers+5; p++)
        cout << *p << ' ';
    cout << endl;

    cout << "Print out *x after p=numbers and x=p" << endl;
    p = numbers;
    int* x;
    x = p;
    cout << *x << endl;



    return 0;
}

