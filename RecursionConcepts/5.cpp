// Write a C++ program to implement a recursive function to check if a given string is a palindrome

#include <iostream>
#include <string>

using namespace std;

bool palindromeRecursive(string name, int a, int b) {
    if (a >= b) {
        return true;
    } else if (name[a] != name[b]) {
        return false;
    } else {
        return palindromeRecursive(name, a + 1, b - 1);
    }
}

int main() {
    string name;

    cout << "Enter a string: ";
    getline(cin, name);

    bool palindrome = palindromeRecursive(name, 0, name.length() - 1);

    if (palindrome) {
        cout << name << " is a palindrome." << endl;
    } else {
        cout << name << " is not a palindrome." << endl;
    }
}