/*Write a program in C++ to display such a pattern for n number of rows using
numbers. There will be odd numbers in each row. The first and last number of each
row will be 1 and the middle column will be the row number. N numbers of columns
will appear in the 1st row. */

#include <iostream>
#include <iomanip>  

using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        cout << setw(i + 1);

        for (int j = 1; j <= rows - i; j++) {
            cout << j;
        }

        for (int k = rows - i - 1; k >= 1; k--) {
            cout << k;
        }

        cout << endl;  
    }
}
