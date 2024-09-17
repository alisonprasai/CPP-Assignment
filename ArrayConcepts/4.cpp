// Write a C++ program to find the smallest element missing from a sorted array.

#include <iostream>

using namespace std;

int smallestMissing(int value[], int n) {
    if (n == 0 || value[0] != 1) {
        return 1;
    }

    for (int i = 1; i < n; i++) {
        if (value[i] - value[i - 1] > 1) {
            return value[i - 1] + 1;
        }
    }

    return value[n - 1] + 1;
}

int main() {
    int value[] = {1, 2, 3, 4, 6, 7, 8};
    int n = sizeof(value) / sizeof(value[0]);

    int smallest = smallestMissing(value, n);

    cout << "The smallest missing element is: " << smallest << endl;

}