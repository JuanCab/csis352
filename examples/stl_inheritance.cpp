#include <iostream>
#include <list>
using namespace std;

void visit(int &value)
{
    cout << value << ' ';
}

template <class T>
class sortedList : public list<T>
{
public:
    void traverse(void (*)(T &));
    void print() const;
    void insert(const T &);
};

template <class T>
void sortedList<T>::traverse(void (*funcPtr)(T &))
{
    typename list<T>::iterator it;
    for (it = list<T>::begin(); it != list<T>::end(); it++)
        funcPtr(*it);
}

template <class T>
void sortedList<T>::print() const
{
    typename list<T>::const_iterator it;
    for (it = list<T>::begin(); it != list<T>::end(); it++)
        cout << *it << ' ';
    cout << endl;
}

template <class T>
void sortedList<T>::insert(const T &newitem)
{
    typename list<T>::iterator it;
    it = list<T>::begin();
    while (it != list<T>::end() && newitem > *it)
        it++;
    list<T>::insert(it, newitem);
}

int main()
{
    sortedList<int> x;
    x.insert(6);
    x.insert(2);
    x.insert(8);
    x.insert(5);
    if (x.empty())
        cout << "empty" << endl;
    else
        cout << "not empty" << endl;
    x.print();
    x.traverse(visit);
    cout << endl;
    return 0;
}
