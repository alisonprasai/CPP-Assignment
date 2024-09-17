// Write a program in C++ to display the pyramid pattern using the alphabet.


#include<iostream>

using namespace std;

int main() {

    int rows;
    cout << "Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        
        for (int j = 0; j < rows - i - 1; j++) {
            cout << "  ";
        }

        
        char alphabet = 'A';
        for (int j = 0; j <= i; j++) {
            cout << alphabet << " ";
            alphabet++;
        }

        
        alphabet -= 2;
        for (int j = 0; j < i; j++) {
            cout << alphabet << " ";
            alphabet--;
        }

        cout << endl; 
    }

}
