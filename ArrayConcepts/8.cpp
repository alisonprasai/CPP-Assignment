// Write a C++ program to find the second lowest and highest numbers in a given array.

#include <iostream>
#include <climits>

using namespace std;

int main() {
    int arr[] = {1, 3, 2, 4, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return 1;
    }

    int first_min = INT_MAX, second_min = INT_MAX;
    int first_max = INT_MIN, second_max = INT_MIN;

    for (int i = 0; i < n; i++) {
        // Update first and second minimums
        if (arr[i] < first_min) {
            second_min = first_min;
            first_min = arr[i];
        } else if (arr[i] < second_min && arr[i] != first_min) {
            second_min = arr[i];
        }

        // Update first and second maximums
        if (arr[i] > first_max) {
            second_max = first_max;
            first_max = arr[i];
        } else if (arr[i] > second_max && arr[i] != first_max) {
            second_max = arr[i];
        }
    }

    cout << "The second lowest number in the array is: " << second_min << endl;
    cout << "The second highest number in the array is: " << second_max << endl;

    
}