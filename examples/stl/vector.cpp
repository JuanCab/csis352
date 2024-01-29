#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> squares(10);

    // fill the vector
    for (int i = 0; i < 10; i++)
        squares[i] = i*i; // Store the squares

    // print the vector
    for (int i = 0; i < 10; i++) {
        cout << "squares[" << i << "]: ";
        cout << squares[i] << ' ';
        cout << squares.at(i) << endl;
    }

    // print information about the vector
    cout << "-----------" << endl;
    cout << "first: " << squares.front() << endl;
    cout << "last: " << squares.back() << endl;
    cout << "size: " << squares.size() << endl;
    cout << "-----------" << endl;

    // Create an iterator
    vector<int>::iterator it;
    it = squares.begin(); // point to the first element
    cout  << *it << endl;

    it += 3; // point to the fourth element
    cout << *it << endl;

    it = squares.end(); // point to the past-the-end element
    it--; // point to the last element
    cout << *it << endl;
    cout << "-----------" << endl;

    // Loop with an iterator
    it = squares.begin();
    while (it != squares.end())
        cout << *it++ << ' ';
    cout << endl;
    cout << "-----------" << endl;

    // Resize & loop again (with for loop)
    squares.resize(20);
    for (it = squares.begin(); it < squares.end(); it++)
        cout << *it << ' ';
    cout << endl;
    cout << "-----------" << endl;

    // Let's check out some other methods
    cout << "capacity: " << squares.capacity() << endl;
    cout << "max size: " << squares.max_size() << endl;
    cout << "    size: " << squares.size() << endl;
    cout << "   empty: " << squares.empty() << endl;
    cout << "-----------" << endl;  

    // Create an array
    int arr[] = { 1, 2, 3, 4, 5 };
    // Copying data into vector
    copy(arr, arr + 5, squares.begin()); // requires <algorithm>
    it = squares.begin();
    while (it != squares.end())
        cout << *it++ << ' ';
    cout << endl;

    return 0;
}