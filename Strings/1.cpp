// Write a C++ program to reverse a given string.

#include<iostream>
#include<string>

using namespace std;

int main(){

    string name;
    cout << "Enter a string: ";
    cin >> name;

    cout << "Reverse of " << name << " is ";

    for(int i = name.length() - 1; i >= 0; i--){
        cout << name[i];
    }
}