// Write a C++ program to find the sum of an A.P. series.
// Sample Output:
// Input the starting number of the A.P. series: 1
// Input the number of items for the A.P. series: 8
// Input the common difference of A.P. series: 5
// The Sum of the A.P. series are :
// 1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 = 148

#include<iostream>

using namespace std;

int main(){

    int start, items, diff;
    int term;
    int sum = 0;

    cout << "Input the starting number of the A.P. series: ";
    cin >> start;
    cout << "Input the number of items for the  A.P. series: ";
    cin >> items;
    cout << "Input the common difference of A.P. series: ";
    cin >> diff;

    cout << "The Sum of the A.P. series are: " << endl;

    for (int i = 0 ; i < items; i++){
        term = start + i * diff;
        sum = sum + term;

        cout << term << " ";
        if(i < items - 1 ){
            cout << " + ";
        }
        else{
            cout << " = " << sum;
        }
        
    }
}