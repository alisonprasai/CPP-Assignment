// Write a C++ program to count prime numbers less than a given positive number.

#include<iostream>
#include<cmath>

using namespace std;

bool checkPrime(int b){

    if (b <= 1){
        return false;
    }
    
    for (int i = 2; i <= sqrt(b); i++){ // if number not divisible by value between 2 and sqrt of the number it is prime
        if (b % i == 0){
            return false;
        }
    }
    return true;
}

int countPrime(int a){
    int count = 0;
    for(int i = 2; i <= a; i++){
        if(checkPrime(i)){
            count++;
        }
    }
    return count;

}


int main(){

    int a;
    cout << "Enter a positive number: ";
    cin >> a;
    
    int finalCount = countPrime(a);
    cout << "Number of prime numbers less than " << a << " is " << finalCount << endl;
   
}
