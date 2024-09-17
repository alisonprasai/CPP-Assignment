// Write a C++ program to find the k largest elements in a given array of integers

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

    int k;
    cout << "Enter the number of largest elements to be printed: ";
    cin >> k;
    

    nth_element(element, element + k - 1, element + n, greater<int>());
     
    
   
    
    cout << "The largest " << k << " elements are: " << endl;

    for (int i = 0; i < k; i++){
        cout << element[i] << "\t";
    }
    
}