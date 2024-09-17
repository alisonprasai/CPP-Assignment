// Write a program in C++ to display the cube of the number up to an integer

#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        cout << "The number is " << i << " and the cube of " << i << " is: " << pow(i , 3) << endl; 
    }
}