// Write a C++ program to find the two repeating elements in a given array of integers.

#include <iostream>
#include <unordered_set>

using namespace std;


int main() {
    int arr[] = {1, 2, 3, 4, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_set<int> elements;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                elements.insert(arr[i]);
        
            }
        }
        
    }

    cout << "The repeating elements are: " << endl;


    for (int element: elements){
        cout << element << endl;
    }

}