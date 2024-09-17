// Write a C++ program to create an n x n matrix by taking an integer (n) as input from the user.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int value;

    cout << "Input";
    cin >> value;
    
    cout << "Input an integer value (Matrix Size): ";
    cin >> n;

    
    if (n <= 0) {
        cout << "Matrix size must be a positive integer." << endl;
        return 1; 
    }

    
    vector<vector<int>> matrix(n, vector<int>(n, value));

    cout << "Create an n x n matrix by said integer:\n";
    for (auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}