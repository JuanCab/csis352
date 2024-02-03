// array of vectors

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void output(const vector<int> v[])
{
    // Print the array of vectors by directly accessing the elements
    // of each vector via the index operator
    cout << "from output" << endl;
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
            cout << setw(4) << v[i][j] << ' ';
        cout << endl;
    }
}

void output2(const vector<int> v[])
{
    // Print the array of vectors by using an iterator to access the
    // elements of each vector
    cout << "from output2" << endl;
    vector<int>::const_iterator vit;
    for (int i=0; i<10; i++)
    {
        for (vit=v[i].begin(); vit!=v[i].end(); vit++)
            cout << setw(4) << *vit << ' ';
        cout << endl;
    }
}

int main()
{
    vector<int> v[10];

    // Check the size of each vector within the array (should be 0)
    for (int i=0; i<10; i++)
        cout << v[i].size() << ' ';
    cout << endl;

    // Resize each vector to have 10 elements
    for (int i=0; i<10; i++)
    {
        v[i].resize(10);
        cout << v[i].size() << ' ';
    }
    cout << endl << "------------------------" << endl;

    // Fill the array of vectors with numbers 1-100
    int count=1;
    for (int i=0; i<10; i++)
        for (int j=0; j<10; j++)
            v[i][j] = count++;

    // Print the array of vectors
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
            cout << setw(4) << v[i][j] << ' ';
        cout << endl;
    }

    // Print the array of vectors using the output functions
    cout << "------------------------" << endl;
    output(v);
    cout << "------------------------" << endl;
    output2(v);

    return 0;
}
