// Write a C++ program to convert a given non-negative integer into English words.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> ones = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
vector<string> tens = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
vector<string> twenties = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

string numberToWords(int num) {

    if (num == 0) {
        return "Zero";
    }

    if (num < 10) {
        return ones[num];
    }

    if (num < 20) {
        return tens[num - 10];
    }

    if (num < 100) {
        return twenties[num / 10 - 2] + (num % 10 ? " " + numberToWords(num % 10) : "");
    }

    if (num < 1000) {
        return numberToWords(num / 100) + " Hundred" + (num % 100 ? " " + numberToWords(num % 100) : "");
    }

    if (num < 10000) {
        return numberToWords(num / 1000) + " Thousand" + (num % 1000 ? " " + numberToWords(num % 1000) : "");
    }

    return "";

}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    cout << numberToWords(num) << endl;


}
