// Write a C++ program that displays the pattern with the highest columns in the first row and digits with the right justified digits.

#include<iostream>
#include <iomanip>

using namespace std;

int main(){

    int rows;
    cout << "Input the number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1 ; i--){
        cout << setw(rows + 1 - i);
        for (int j = 1 ; j <= i; j++){
            cout << j;    
    }
    cout << endl;
    }
}