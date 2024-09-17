// Write a program in C++ to display the numbers in reverse order

#include<iostream>
#include<string>

using namespace std;

int main(){

    string num;
    cout << "Input a number: ";
    cin >> num;

    cout << "The number in reverse order is : ";


    for(int i = num.length(); i >= 0; i--){

        cout << num[i];

    }
}