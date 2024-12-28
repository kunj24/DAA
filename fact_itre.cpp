#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i; // Calculate factorial
            count++;        // Count the iterations
        }
        cout << "Factorial of " << n << " is " << factorial << endl;
        cout << "Number of iterations: " << count << endl;
    }

    return 0;
}
