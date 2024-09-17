// //Write a C++ program to find the largest word in a given string.


#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    cout << "Enter a string: ";
    getline(cin, sentence);

    string largest;
    int currentLength = 0;
    int largestLength = 0;

    for (int i = 0; i < sentence.length(); i++) {
        if (isspace(sentence[i])) {
            if (currentLength > largestLength) {
                largest = sentence.substr(i - currentLength, currentLength);
                largestLength = currentLength;
            }
            currentLength = 0;
        } else {
            currentLength++;
        }
    }

    if (currentLength > largestLength) {
        largest = sentence.substr(sentence.length() - currentLength, currentLength);
    }

    cout << "The largest word is: " << largest << endl;
    
}