#include <iostream>
#include <queue>
using namespace std;

void dumpQueue(queue<int> q)
{
    cout << "Dumping the contents of the queue: " << endl;
    while (!q.empty())
    {
        cout << q.front() << ' ';
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    int num;
    cout << "enter ints, 0 to quit: ";
    cin >> num;
    while (num != 0)
    {
        q.push(num);
        cin >> num;
    }
    dumpQueue(q);

    // dump out the contents of the queue again (how can I be able to do this?)
    cout << "Dumping the contents of the queue again: " << endl;
    while (!q.empty())
    {
        cout << q.front() << ' ';
        q.pop();
    }
    cout << endl;

    // dump out the contents of the queue again (should this work?
    cout << "here it is again... or not: ";
    while (!q.empty())
    {
        cout << q.front() << ' ';
        q.pop();
    }
    cout << endl;
    return 0;
}
