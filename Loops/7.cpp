// Write a program in C++ to display the first n terms of the Fibonacci series.

//Write a program in C++ to display the first n terms of the Fibonacci series

#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 1;
    int n;

    cout << "Enter the number of terms to be displayed: ";
    cin >> n;

    if (n == 1) {
        cout << "The first term of the Fibonacci series is " << a << endl;
        return 0;
    }

    cout << a << "\t" << b << "\t";

    // Calculate and print the remaining terms
    for (int i = 2; i < n; i++) {
        int c = a + b;
        cout << c << "\t";
        a = b;
        b = c;
    }


}