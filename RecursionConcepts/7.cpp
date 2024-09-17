// Write a C++ program to implement a recursive function to find the sum of all prime numbers in a given range.

#include <iostream>

using namespace std;

bool prime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i <= number/2; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int primeRecursive(int a, int b) {
    if (a > b) {
        return 0;
    }

    int sum = 0;

    if (prime(a)) {
        sum += a;
    }

    return sum + primeRecursive(a + 1, b);
}

int main() {
    cout << "Enter the starting and ending numbers: ";
    int a, b;
    cin >> a >> b;

    int sum = primeRecursive(a, b);

    cout << "The sum of prime numbers between " << a << " and " << b << " is: " << sum << endl;

}