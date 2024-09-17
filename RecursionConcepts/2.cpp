// Write a C++ program to calculate the factorial of a given number using recursion.

#include <iostream>

using namespace std;

int factorial(int number){
    if (number == 0) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}

int main(){

    int number;

    cout << "Enter a integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Try positive numbers." << endl;
    } else
    {
        int fact = factorial(number);
        cout << "Factorial of " << number << " is: " << fact << endl;
    }
}