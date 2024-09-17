// Write a program in C++ to convert a decimal number to a binary number

#include<iostream>
#include<string>

using namespace std;

int main(){

    int num;
    cout << "Enter the decimal number: ";
    cin >> num;
    
    string bin ="";

    while ( num > 0){

        bin = to_string(num % 2) + bin;
        num = num / 2;
    }

    cout << "The binary representation is =" << bin << endl;
    

}
