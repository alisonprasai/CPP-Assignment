// Write a C++ program to make such a pattern like a right angle triangle with the number increased by 1.

#include<iostream>

using namespace std;

int main(){

    int rows;
    int number = 1;

    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            cout << number << "\t";
            number++;
        }
        cout << endl;
    }
}