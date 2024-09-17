// Write a program in C++ to enter any number and print all factors of the number.

#include<iostream>

using namespace std;

int main(){

    int a;
    int fact;

    cout << "Enter a number: ";
    cin >> a;

    cout << "The factors are: ";

    for (int i = 1 ; i <= a; i++){
        if(a % i == 0){
            cout << i << "\t";
        }
    }
}