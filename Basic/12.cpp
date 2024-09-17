// Write a C++ program to compute the square root of a given non-negative integer

#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int a;
    cout << "Enter a non-negative integer: ";
    cin >> a;

    if (a <= 0){

        cout << "The number is not positive" << endl;
    
    }

    int squareValue = sqrt(a);

    cout << "Input= " << a << endl;
    cout << "Output: Square root of " << a << " is = " << squareValue << endl; 
}