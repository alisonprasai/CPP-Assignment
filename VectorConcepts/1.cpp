// Write a C++ program that returns the elements in a vector that are strictly smaller than their adjacent left and right neighbours.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> elements = {1,2,5,0,3,1,7};
    int size = elements.size();

    cout << "Original Vector elements: " << endl;

    for (int i = 0; i < size; i++){

        cout << elements[i] << "  ";

    }

    cout << endl;

    cout << "Vector elements that are smaller than its adjacent neighbours: " << endl;

    for (int i = 1; i < size - 1; i++){

        if(elements[i] < elements[i - 1] && elements[i] < elements[i+1])
        {
            cout << elements[i] << endl;
        }      
    }
}