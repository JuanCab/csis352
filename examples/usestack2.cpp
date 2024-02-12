#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    int num;

    cout << "enter ints, 0 to quit: ";
    cin >> num;
    while (num != 0)
    {
        s.push(num);
        cin >> num;
    }
    cout << "Dumping contents of stack: " << endl;
    while (!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << endl;
    return 0;
}