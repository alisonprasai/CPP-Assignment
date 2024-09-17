// Write a program in C++ to calculate the product of the digits of any number.

#include<iostream>

using namespace std;

int main(){

    int a;
    int prod = 1;

    cout << "Enter a number: ";
    cin >> a;

    while (a > 0){
        prod = prod * ( a % 10 );
        a = a / 10;
    } 

    cout << "The product of digits of " << a << " is " << prod << endl;
}