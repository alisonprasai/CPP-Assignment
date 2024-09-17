// Write a C++ program to find the second largest element in an array of integers

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

   

    nth_element(element, element + 1, element + n, greater<int>());
    
    cout << "The second largest element is: " << element[1];
    
}