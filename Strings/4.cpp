//Write a C++ program to check if a given string is a Palindrome or not.


#include <iostream>
#include <string>

using namespace std;

int main() {
    string word, revword = "";
    cout << "Enter a string: ";
    cin >> word;

    
    for (int i = word.length() - 1; i >= 0; i--) {
        revword += word[i];
    }


    if (word == revword) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    
}
