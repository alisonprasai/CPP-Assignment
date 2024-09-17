// Write a program in C++ to find the sum of the series 1 + 11 + 111 + 1111 + … up to ‘n’ terms.

#include<iostream>

using namespace std;

int main(){

    int n;
    int series = 0, sum = 0;

    cout << "Enter the numbers of terms to be summed: ";
    cin >> n;

    for (int i = 1; i <=n; i++){
        series = series * 10 + 1;
        sum = sum + series;
    }

    cout << "The sum of " << n << " terms in the series 1 + 11 + 111 + ... is = " << sum;
}