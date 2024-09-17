// Write a C++ program to implement a recursive function to get the nth Fibonacci number

#include <iostream>

using namespace std;

int fibonacci(int number) {
    if (number <= 1) {
        return number;
    } else {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Try non-negative numbers." << endl;
    } else {
        int fibonacciNum = fibonacci(number);
        cout << "The " << number << "th Fibonacci number is: " << fibonacciNum << endl;
    }

}
