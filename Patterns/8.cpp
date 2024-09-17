// Write a C++ program to print a pattern in which the highest number of columns appears in the first row 

#include<iostream>

using namespace std;

int main(){

    int rows;
    cout << "Input the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows ; i++){
        for (int j = i ; j <= rows; j++){
            cout << j;
        }
    cout << endl;
    }
}