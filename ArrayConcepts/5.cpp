// Write a C++ program to update every array element by multiplication of the next and previous values of a given array of integers.

#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Given list of elements are: " << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    

    cout << "The updated list of elements after multiplication of previous and next values are: " << endl;

    for (int i = 0; i < n; i++){
        if(i == 0){
            cout << arr[i] * arr[i+1] << "  ";
        }
        else if(i == n - 1 ){
            cout << arr[i-1] * arr[i];
        }
        else{
            cout << (arr[i-1]* arr[i] * arr[i+1]) << "  ";
        }
    }
}