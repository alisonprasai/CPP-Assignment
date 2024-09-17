// Write a C++ program to find the first repeating element in an array of integers.

#include <iostream>

using namespace std;


int main() {
    int arr[] = {1, 3, 2, 4, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The first repeating element in the array is: " << endl;


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i];
                return 0;
        
            }
        }
        
    }
}