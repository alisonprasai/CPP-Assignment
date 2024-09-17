// Write a C++ program to capitalize the first character of each element of a given string vector. Return the vector.

#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

vector<string> capitalizedFirst(vector<string>& elements) {
    for (string& word : elements) { 
        if (!word.empty()) {
            word[0] = toupper(word[0]); 
        }
    }
    return elements;
}

int main() {
    vector<string> elements = {"red", "green", "black", "white", "pink"};

    cout << "Original Vector elements:" << endl;
    for (const string& word : elements) {
        cout << word << "  ";
    }
    cout << endl;

    vector<string> capitalizedWords = capitalizedFirst(elements);

    cout << "Capitalize the first character of each vector element:" << endl;
    for (const string& word : capitalizedWords) {
        cout << word << "  ";
    }
    cout << endl;

}
