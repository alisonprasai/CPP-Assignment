/*Write a C++ program to add up all the digits between two given integers. Add all the
digits between 11 and 16 and it should be inclusive of the two numbers.*/

#include<iostream>

using namespace std;

int digitSum(int x){
    int sum = 0;
    int y;
    while( x > 0 ){
        y = x % 10;
        sum = sum + y;
        x = x / 10;
    }
    return sum;
}

int main(){
    int a = 11, b = 16;
    int total = 0;
    int sum;

    for( int i = a; i<=b; i++ ){
        
        total = total + digitSum(i);
    }

    cout << "The addition of digits between " << a << " and " << b << " is: " << total;

}