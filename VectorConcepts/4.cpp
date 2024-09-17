// Write a C++ program to verify that all of the letters in the second string appear in the first string as well. Return true otherwise false.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool containsAllLetters(vector<char>& first, vector<char>& second) {
    
    vector<char> firstChars(first.begin(), first.end());
    vector<char> secondChars(second.begin(), second.end());


    for (char c : secondChars) {
        if (find(firstChars.begin(), firstChars.end(), c) == firstChars.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    string first = "Python";
    string second = "Py";

    vector<char> firstChars(first.begin(), first.end());
    vector<char> secondChars(second.begin(), second.end());

    if (containsAllLetters(firstChars, secondChars)) 
    {
        cout << "Check - First string contains all letters from second string: True" << endl;
    } 
    else 
    {
        cout << "Check - First string contains all letters from second string: False" << endl;
    }

}