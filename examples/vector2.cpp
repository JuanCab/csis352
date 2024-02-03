// vector of vectors

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// As a warning, the parameter declaration of the output function
//    vector<vector<int>> v
// can cause problems on older compilers (which confuse the >> for an
// input stream).  If you have trouble compiling this code, you can add
// a space between the >> as in:
//    vector<vector<int> > v
// OR add the parameter to the g++ compiler command line
// --std=c++11
// to enable C++ 2011 features.
void output(vector<vector<int>> v)
{
    // Print the vector of vectors by directly accessing the elements
    // of each vector via the index operator.  Big change from array of
    // vectors is that we can use the size() method to determine the
    // number of elements in each vector.
    cout << "from output" << endl;
    for (int i=0; i<v.size(); i++) {
        for (int j=0; j<v[i].size(); j++) {
            cout << setw(4) << v[i][j] << ' ';
        }
        cout << endl;
    }
}

void output2(const vector<vector<int>> &v)
{
    // Print the vector of vectors by using an iterator to access the
    // elements of each vector
    cout << "from output2" << endl;
    vector<int>::const_iterator vit;
    for (int i=0; i<10; i++) {
        for (vit=v[i].begin(); vit!=v[i].end(); vit++) {
            cout << setw(4) << *vit << ' ';
        }
        cout << endl;
    }
}

void output3(const vector<vector<int>> &v)
{
    // Print the vector of vectors by using an iterator across the vector
    // of vectors and an iterator across each vector
    cout << "from output3" << endl;
    vector<vector<int>>::const_iterator vit1; // Iterator for vector of vectors
    vector<int>::const_iterator vit2; // Iterator for each vector
    for (vit1=v.begin(); vit1!=v.end(); vit1++)
    {
        for (vit2=vit1->begin(); vit2 != vit1->end(); vit2++)
            cout << setw(4) << *vit2 << ' ';
        cout << endl;
    }
}

int main()
{
    // You could create the vector of vectors this way, but it's
    // less efficient than the method below.
    /*
    vector<int> v(10); // Create an int vector of 10 elements
    for (int i=0; i<10; i++)
        v[i].resize(10);
    */
    vector<vector<int>> v(10, vector<int>(10));

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
    cout << "------------------------" << endl;
    output3(v);

    return 0;
}
