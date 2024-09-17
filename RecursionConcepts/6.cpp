// Write a C++ program to implement a recursive function to calculate the sum of even and odd numbers in a given range.

#include <iostream>

using namespace std;

void sum(int a, int b, int& sumEven, int& sumOdd) {
    if (a > b) {
        return;
    }

    if (a % 2 == 0) {
        sumEven += a;
    } else {
        sumOdd += a;
    }

    sum(a + 1, b, sumEven, sumOdd);
}

int main() {
    int a, b, sumEven = 0, sumOdd = 0;

    cout << "Enter the starting and ending numbers: ";
    cin >> a >> b;

    sum(a, b, sumEven, sumOdd);

    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;

}