// Write a C++ program to make such a pattern, like a pyramid, with a repeating number.


#include<iostream>

using namespace std;

int main(){

    int rows;

    cout << "Input number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++) {

        for(int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        for(int k = 1; k <= i; k++) {
            cout << i << " ";
        }

        cout << endl;
    }

}