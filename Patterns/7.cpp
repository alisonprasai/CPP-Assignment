// Write a C++ program to display Pascal's triangle like a right angle triangle.

#include<iostream>

using namespace std;

int main(){

    int rows;
    int start = 1;
    
    cout << "Input number of rows: ";
    cin >> rows;

    for( int i = 0; i < rows; i++){

        for(int j = 0; j<=i; j++){

            if (i == 0 || j == 0){
                start = 1;
            }
            else{
                start = start * (i - j + 1) / j;
            }

            cout << start << " ";
        }
        
        cout << endl;
    }
}
