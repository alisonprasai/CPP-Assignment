/*Write a C++ program that prints the three highest numbers from a list of numbers in
descending order.*/

#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int n;
    

    cout << "Enter the number of elements in the list: " << endl;
    cin >> n;

    int numbers[n];
         
    cout << "Enter " <<  n << " numbers" << endl;
    for(int i = 0; i<n; i++){
        cin >> numbers[i];
    }


    // sort(from range, to range, if desecending then greater<datatype>())
    sort(numbers, numbers + n, greater<int>());

    cout << "The three highest numbers from the list in descending order are: ";
    for(int i = 0; i < 3; i++){
        cout << numbers[i] << "  ";
    }
}