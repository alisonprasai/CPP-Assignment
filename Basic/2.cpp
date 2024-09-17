/*Write a C++ program that swaps two variables without using a third variable.*/

#include<iostream>

using namespace std;

int main(){

    int first,second;

    cout << "Input 1st number: ";
    cin >> first;

    cout << "Input 2nd number: ";
    cin >> second;

    first = first + second;
    second = first - second;
    first = first - second;

    cout << "After swapping the 1st number is: " << first << endl;
    cout << "After swapping the 2nd number is: " << second  << endl;
}
