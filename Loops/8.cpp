// Write a program in C++ to find the number and sum of all integers between 100 and 200 which are divisible by 9.

#include<iostream>

using namespace std;

int main(){

    int count = 0;

    cout << "Numbers between 100 and 200, divisible by 9:" << endl;
    for (int i = 100 ; i <= 200; i++){
        if ( i % 9 == 0){
            cout << i << "\t";
            count = count + i;
        }
    }
    cout << endl;
    cout << "The sum: " << count;
}