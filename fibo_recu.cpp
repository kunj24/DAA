#include <iostream>
using namespace std;

// Global variable to count the number of operations
int operation_count = 0;

// Recursive Fibonacci function
int fibonacci(int n) {
    // Increment the operation count every time the function is called
    operation_count++;

    if (n <= 1) {
        return n;  // Base case
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive calls
    }
}

int main() {
    int n;
    cout << "Enter the number for Fibonacci sequence: ";
    cin >> n;

    int result = fibonacci(n);  // Call Fibonacci function
    cout << "Fibonacci(" << n << ") = " << result << endl;
    cout << "Number of operations: " << operation_count << endl;

    return 0;
}