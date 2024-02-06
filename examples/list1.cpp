#include <iostream>
#include <list>
using namespace std;

void output(const list<int>& l)
{
    list<int>::const_iterator it;
    it = l.begin();
    while (it != l.end())
       cout << *it++ << ' ';
    cout << endl;
}

void outputReverse(const list<int>& l)
{
    // Like output, but running in the reverse direction
    list<int>::const_reverse_iterator it;
    it = l.rbegin();
    while (it != l.rend())
       cout << *it++ << ' ';
    cout << endl;
}

int main()
{
    // Start with an empty list, then add some elements, then output the list
    list<int> l;
    cout << "max_size: " << l.max_size() << endl;
    cout << "size (initial): " << l.size()<< endl;
    for (int i=0; i<10; i++)
       l.push_back(2*i);
    cout << "size (after 10 push_back): " << l.size()<< endl;
    l.push_back(20);
    cout << "size (after push_back): " << l.size()<< endl;
    output(l);
    outputReverse(l);
    cout << "-------------" << endl;

    // Now add some more elements, then output the list
    cout << "size    : " << l.size()<< endl;
    for (int i=11; i<=20; i++)
       l.push_back(5*i);
    cout << "size (after 10 more push_back): " << l.size()<< endl;
    l.pop_back();
    cout << "size (after pop_back): " << l.size()<< endl;
    output(l);
    cout << "-------------" << endl;

    // Now play with the iterator and insert
    list<int>::iterator it;
    it = l.begin();
    it++; it++; it++;
    it = l.insert(it, 99);
    cout << *it << endl;
    l.insert(it, 100);
    cout << *it << endl;
    output(l);
    return 0;
}
