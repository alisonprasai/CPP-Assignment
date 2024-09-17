// Write a C++ program to check if a given integer is a power of three or not.

#include<iostream>

using namespace std;

int main(){

    int a, b;
    int temp;

    cout << "Enter an integer: ";
    cin >> a;

    temp = a;

    if (temp <= 0){
        cout << "Enter a positive integer: " << endl;
        return 1;
    }

    while ( temp % 3 == 0){

        temp = temp /3;

    }

    if (temp == 1 ){
        cout << " Input: " << a << endl;
        cout << "Output: " << "True" << endl;
    }
    else{
        cout << " Input: " << a << endl;
        cout << "Output: " << "False" << endl;
    }
}