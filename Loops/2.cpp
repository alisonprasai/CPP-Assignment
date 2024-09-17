// Write a program in C++ to find the last prime number that occurs before the entered number.

#include<iostream>
#include<cmath>

using namespace std;

bool prime(int num){

    if (num <=1){
        return false;
    }

    for (int i = 2; i <= num/2; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}


int main(){

    int num;
    // int lastPrime;
    cout << "Enter a number greater than 2: "; // Since 2 is the first prime number
    cin >> num;

    for (int i = num -1; i > 1; i--){  // checking from backwards because we have to find the last prime number of input-1 
        if (prime(i)){
            cout << "The last prime number before " << num << " is " << i;
            return 0;
        }
    }
}