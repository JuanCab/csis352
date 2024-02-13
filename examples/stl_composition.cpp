#include <iostream>
#include <list>
using namespace std;

// Define our own class template with two member functions
template <class T>
class myClass
{
    public:
        void insert(const T&);
        void print() const;
    private:
        list<T> values;
};

// Define the member functions of the class template
template <class T>
void myClass<T>::print() const
{
    // typename can be used to declare that a dependent qualified name is a
    // type. By dependent we mean that the type depends on a template parameter
    // (in this case T). By qualified we mean that the name is qualified by a
    // class or namespace name. In this case, const_iterator is a qualified
    // name because it is qualified by the name list<T>.  Without typename,
    // the compiler would assume that const_iterator is a static member of the
    // class list<T>.  This would be incorrect, because const_iterator is a
    // type, not a static member.

    typename list<T>::const_iterator it;
    for (it=values.begin(); it!=values.end(); it++)
        cout << *it << ' ';
    cout << endl;
}

template <class T>
void myClass<T>::insert(const T& item)
{
    values.insert(values.end(), item);
}

int main()
{
    // Create an object of the class template and call its member functions
    myClass<int> x;
    x.insert(4);
    x.insert(12);
    x.insert(7);
    x.insert(9);
    x.print();

    return 0;
}

