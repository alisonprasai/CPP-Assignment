#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Function to find the maximum frequency of any letter in a word
int maxRepeatedLetters(const string& word) {
    unordered_map<char, int> letterCount;
    int maxCount = 0;
    
    // Count the frequency of each letter
    for (char ch : word) {
        if (isalpha(ch)) { // Only count alphabetic characters
            letterCount[ch]++;
            maxCount = max(maxCount, letterCount[ch]);
        }
    }
    
    return maxCount;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    istringstream stream(input);
    string word;
    string wordWithMaxRepeats;
    int highestRepeats = 0;

    while (stream >> word) {
        int repeats = maxRepeatedLetters(word);
        
        // Check if this word has more repeated letters than previously found
        if (repeats > highestRepeats) {
            highestRepeats = repeats;
            wordWithMaxRepeats = word;
        }
    }

    // Output the word with the highest number of repeated letters
    cout << "Word which has the highest number of repeated letters: " << wordWithMaxRepeats << endl;

    return 0;
}
