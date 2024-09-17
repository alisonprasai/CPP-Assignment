// . Write a program in C++ to find the two's complement of a binary number.

#include<iostream>
#include<string>

using namespace std;

int main(){

    string bin;
    cout << "Enter the binary number: ";
    cin >> bin;

    cout << "The original binary = " << bin << endl;

    int binLength = bin.length();

    for (int i = 0; i < binLength; i++){

        if (bin[i] == '0'){
            bin[i] = '1';
        }
        else if (bin[i] == '1'){
            bin[i] = '0';
        }
        else{
            cout << "Not a binary number" << endl;
            return 1;
        }
    }

    cout << "After one's complement the value = " << bin << endl;

  
    bool carry = true;
    for (int i = binLength - 1; i >= 0; i--) {
        if (carry) {
            if (bin[i] == '1') {
                bin[i] = '0'; 
            } else {
                bin[i] = '1'; 
                carry = false;
            }
        }
    }

    if (carry) {
        bin = "1" + bin;
        binLength++;
    }

    cout << "The two's complement of the binary number is: " << bin << endl;

}