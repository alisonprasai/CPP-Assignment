// Write a program in C++ to find the perfect numbers between 1 and 500.

#include<iostream>

using namespace std;



int main(){
    
    int num;

    cout << "The perfect numbers between 1 and 500 are: " << endl;

    for(num  = 1; num <= 500; num++){
        int sumDigit = 0;
        for (int i = 1; i < num; i++){
            if(num % i == 0){
                sumDigit = sumDigit + i;
            }
            }
        if (sumDigit == num){
            cout << num << endl;
        }
        }
}
    
