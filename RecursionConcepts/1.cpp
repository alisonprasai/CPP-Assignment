// Write a C++ program to find the sum of all elements in an array using recursion.

#include<iostream>

using namespace std;

int sumofElements(int arr[], int size){
    if (size == 0) {
        return 0;
    } else {
        return arr[size - 1] + sumofElements(arr, size - 1);
    }
}

int main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int sum = sumofElements(arr,size);
    cout << "Sum of all elements in the array is: " << sum;
}