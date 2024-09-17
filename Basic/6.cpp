/*Write a C++ program to compute the sum of the two given integers and count the
number of digits in the sum value.*/

#include<iostream>

using namespace std;

int main(){

    int a, b;
    int sum;
    int count = 0;

    cout << "Enter first integer: " << endl;
    cin >> a;

    cout << "Enter second integer: " << endl;
    cin >> b;

    if (a == 0 && b == 0){
        cout << "The integer can't be zero, Try greather than 0" << endl;
        return 1;
    }

    sum = a + b;
    
    //for negative integer cases
    if (sum == 0 ) {

        cout << "Make sure the sum is not Zero" << endl;
        return 1;
    }
    cout << "The sum of two given integers is: " << sum << endl;

    //count
    while( sum > 0 ){
        sum = sum / 10;
        count ++;
    }

    cout << "The number of digits in the sum value is: " << count << endl;

}