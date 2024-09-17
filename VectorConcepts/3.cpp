//Write a C++ program that takes a vector of strings and returns only those strings that contain a number(s). Return an empty vector if none.

#include <iostream>
#include <vector>
#include <regex>

using namespace std;

vector<string> stringNumbers(const vector<string>& strNums) {
    vector<string> result;
    regex numberRegex("[0-9]");

    for (const string& str : strNums) {
        if (regex_search(str, numberRegex)) {
            result.push_back(str);
        }
    }

    return result;
}

int main() {
    vector<string> strNums = {"red", "green23", "1black", "white"};

    vector<string> stringsWithNumbersResult = stringNumbers(strNums);

    if (stringsWithNumbersResult.empty()) {
        cout << "No strings contain numbers." << endl;
    } else {
        cout << "Strings containing numbers: " << endl;
        for (const string& str : stringsWithNumbersResult) {
            cout << str << " ";
        }
        cout << endl;
    }

}