#include <iostream>
using namespace std;

// Recursive function to calculate factorial and count calls
long long factorial(int n, int &count) {
    count++; // Increment the count for each recursive call
    if (n <= 1) {
        return 1; // Base case
    }
    return n * factorial(n - 1, count); // Recursive case
}

int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        long long result = factorial(n, count);
        cout << "Factorial of " << n << " is " << result << endl;
        cout << "Number of recursive calls: " << count << endl;
    }

    return 0;
}
