/*
Question: Print Prime Numbers From 2 to N

Approach:
1. Input N
2. Check each number from 2 to N for prime
3. Print numbers that have no divisor up to sqrt(number)

Time Complexity: O(n * sqrt(n))
Space Complexity: O(1)
*/

// For a positive N, WAP that prints all the prime numbers from 2 to N (Assume N >= 2)
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    cout << "Prime numbers from 2 to " << n << " are:" << endl;

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << endl;
        }
    }

    return 0;
}
