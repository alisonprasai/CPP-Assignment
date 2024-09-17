// Write a C++ program to find the largest three elements in an array.

#include<iostream>
#include<algorithm>


using namespace std;

int main(){

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if(n<3){
        cout << "Enter at least 3 elements: ";
        return 1;
    }

    int element[n];

    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++){
        cin >> element[i];
    }

   

    nth_element(element, element + 2, element + n, greater<int>());
    nth_element(element, element + 1, element + n, greater<int>());
    nth_element(element, element, element + n, greater<int>());
    
    cout << "The largest 3 elements are: " << endl;

    for (int i = 0; i < 3; i++){
        cout << element[i] << "\t";
    }
    
}