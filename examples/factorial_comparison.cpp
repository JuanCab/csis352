#include <iostream>
#include <chrono> // For measuring execution time
using namespace std;
using namespace std::chrono;

// I am using unsigned long long to store the result because it can store
// a much larger range of values than int.  And unsigned long long can store
// the factorial of numbers up to 20.

// Recursive function to compute factorial
unsigned long long fact_rec(int n)
{
    if (n == 0)
        return 1;
    return n * fact_rec(n - 1);
}

// Iterative function to compute factorial
unsigned long long fact_iter(int n)
{
    unsigned long long res = 1;
    for (int i = 2; i <= n; ++i)
        res *= i;
    return res;
}

int main() {
    unsigned long long num = 20; // Change this to the desired number
    unsigned long long result_rec, result_iter;

    // Measure execution time for recursive approach
    high_resolution_clock::time_point start_rec = high_resolution_clock::now();
    result_rec = fact_rec(num);
    high_resolution_clock::time_point end_rec = high_resolution_clock::now();

    // Measure execution time for iterative approach
    high_resolution_clock::time_point start_iter = high_resolution_clock::now();
    result_iter = fact_iter(num);
    high_resolution_clock::time_point end_iter = high_resolution_clock::now();

    // Calculate execution times
    long long delta_rec = duration_cast<nanoseconds>(end_rec - start_rec).count();
    long long delta_iter = duration_cast<nanoseconds>(end_iter - start_iter).count();

    cout << "Factorial of " << num << " using Recursion is: " << result_rec << endl;
    cout << "Factorial of " << num << " using Iteration is: " << result_iter << endl;
    cout << "Execution time (Recursion): " << delta_rec << " nanoseconds" << endl;
    cout << "Execution time (Iteration): " << delta_iter << " nanoseconds" << endl;

    return 0;
}
