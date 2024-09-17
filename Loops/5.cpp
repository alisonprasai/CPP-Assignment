// Write a C++ program to list non-prime numbers from 1 to an upperbound

// Write a program in C++ to find the last prime number that occurs before the entered number.

#include<iostream>
#include<cmath>

using namespace std;

bool prime(int n){


    for (int i = 2; i <= n/2; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}


int main(){

    int num;
    cout << "Input the upper limit "; 
    cin >> num;

    cout << "The non prime numbers are: " << endl;

    for (int i = 2; i <= num; i++){  
        if (!prime(i)){
            cout << i << "\t";
        }
    }
}