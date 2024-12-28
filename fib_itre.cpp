#include <iostream>
using namespace std;

void fibonacci(int n, int &count) {
    long long a = 0, b = 1, c = 0;
    count = 0; // Initialize count of iterations

    if (n == 0) {
        cout << "Fibonacci(0): " << a << endl;
        cout << "Number of iterations: " << count << endl;
        return;
    }

    cout << "Fibonacci sequence: ";
    cout << a << " " << b << " "; // Print first two terms

    for (int i = 2; i < n; ++i) {
        c = a + b; // Calculate the next term
        cout << c << " "; // Print the term
        a = b;           // Update `a` to the previous `b`
        b = c;           // Update `b` to the new term
        count++;         // Increment the count
    }

    cout << endl;
    cout << "Number of iterations: " << count << endl;
}

int main() {
    int n, count;
    cout << "Enter the number of Fibonacci terms to calculate: ";
    cin >> n;

    if (n < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
    } else {
        fibonacci(n, count);
    }

    return 0;
}
