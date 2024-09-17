//Write a C++ program to add repeatedly all digits of a given non-negative number until the result has only one digit.

#include <iostream>

using namespace std;


int sum(int num) {
    int sum = 0;
    while (num > 0) {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}


int oneDigit(int num) {
    while (num >= 10) {
        num = sum(num);
    }
    return num;
}

int main() {
    int num;

    cout << "Enter a non-negative number: ";
    cin >> num;

    if (num < 0) {
        cout << "The number must be non-negative." << endl;
        return 1;
    }

    int finalValue = oneDigit(num);
    cout << "The repeatedly added digits until one digit obtained is: " << finalValue << endl;

}
