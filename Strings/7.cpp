// Write a C++ program that removes a specific character from a given string. Return the updated string.

#include <iostream>
#include <string>

using namespace std;

string removeCharacter( string word, char remove) {

    string result;

    
    for (char c : word) {
        
        if (c != remove) {
            result += c;
        }
    }

    return result;
}

int main() {
    string word;
    char remove;

   
    cout << "Enter the string: ";
    getline(cin, word);

    cout << "Enter the character to remove: ";
    cin >> remove;

    
    string updatedString = removeCharacter(word, remove);


    cout << "Updated string: " << updatedString << endl;


}
