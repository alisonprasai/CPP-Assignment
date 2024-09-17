// Write a C++ program to print Floyd's Triangle.

#include<iostream>

using namespace std;


int main(){


    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++){
        int first = (i % 2 == 0) ? 0 : 1;   
        for (int j = 1; j <= i; j++){
            cout << first;
            first = 1 - first;
        }

        cout << endl;
    }

}