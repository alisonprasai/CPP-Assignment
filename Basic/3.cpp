/*Write a C++ program to swap the first and last digits of any number.*/

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){

    string number;

    cout << "Input any number: ";
    cin >> number;

    if(number.length() < 2){
        cout << "Input at least two digit numbers" << endl;
    }

    int numberLength = number.length() - 1;
    
    char firstDigit = number[0];
    char lastDigit = number[numberLength];

    number[0] = lastDigit;
    number[numberLength] = firstDigit;

    cout << "The number after swapping the first and last digits is: " << number;
    
}