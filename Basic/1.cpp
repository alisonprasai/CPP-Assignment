/*Write a C++ program that accepts the user's first and last name and prints them in reverse order with a space between them.*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string a,b;

    cout << "Input First Name: ";
    cin >> a;

    cout << "Input Last Name: ";
    cin >> b;

    cout << "Name in reverse is: " << b << " " << a << endl;

}