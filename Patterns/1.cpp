// Write a program in C++ to display a pattern like a right angle triangle using an asterisk.

#include<iostream>

using namespace std;

int main(){

    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}