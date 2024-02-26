#include <iostream>
#include <chrono> // For measuring execution time
using namespace std;
using namespace std::chrono;

// Recursive function to compute fibonacci numbers
int rFibNum_rec(int a, int b, int n) {
    if (n == 1)
        return a;
    else if (n == 2)
        return b;
    else
        return rFibNum_rec(a, b, n - 1) + rFibNum_rec(a, b, n - 2);
}

// Iterative function to compute fibonacci numbers
int rFibNum_iter(int a, int b, int n)
{
    int c;

    if (n == 1)
        return a;
    else if (n == 2)
        return b;
    else {
        for (int i = 3; i <= n; i++) {
            c = a + b; // Compute next number in the sequence
            a = b;     // Update a (current-2)
            b = c;     // Update b (current-1)
        }
        return c;
    }
}

int main() {
    int num = 40; // Change this to the desired number
    int result_rec, result_iter;

    // Measure execution time for recursive approach
    high_resolution_clock::time_point start_rec = high_resolution_clock::now();
    result_rec = rFibNum_rec(1, 1, num);
    high_resolution_clock::time_point end_rec = high_resolution_clock::now();

    // Measure execution time for iterative approach
    high_resolution_clock::time_point start_iter = high_resolution_clock::now();
    result_iter = rFibNum_iter(1, 1, num);
    high_resolution_clock::time_point end_iter = high_resolution_clock::now();

    // Calculate execution times
    long long delta_rec = duration_cast<nanoseconds>(end_rec - start_rec).count();
    long long delta_iter = duration_cast<nanoseconds>(end_iter - start_iter).count();

    cout << "The "<< num <<" classic Fibonacci number found using Recursion is: " << result_rec << endl;
    cout << "The " << num << " classic Fibonacci number found using Iteration is: " << result_iter << endl;
    cout << "Execution time (Recursion): " << delta_rec << " nanoseconds" << endl;
    cout << "Execution time (Iteration): " << delta_iter << " nanoseconds" << endl;

    return 0;
}
