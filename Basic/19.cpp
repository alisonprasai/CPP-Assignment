//Write a C++ program to convert a binary number to a decimal number.

#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main() {
    string num;
    int dec = 0;

    cout << "Enter the binary number: ";
    cin >> num;

    int length = num.length();

    for (int i = 0; i < length; i++) {
    
        if (num[i] != '0' && num[i] != '1') {
            cout << "The input is not a valid binary number." << endl;
            return 1;
        }

        
        if (num[i] == '1') {
            dec += pow(2, length - i - 1);
        }
    }

    cout << "The decimal representation is = " << dec << endl;

}
