// Write a C++ program to count the number of occurrences of a given number in a sorted array of integers.

#include<iostream>

using namespace std;

int main(){

 int a[20] = {1,1,1,2,2,2,2,2,3,3,3,3,4,4,4,5,5,6};
 
 int size = sizeof(a)/sizeof(a[0]);

 int targetNumber;

 cout << "Which number's occurences would to like to determine: ";

 cin >> targetNumber;

 int count = 0;



 for (int i = 0;  i < size; i++){
    if (a[i] == targetNumber){
        count++;
    }  
 }

 cout << "The number of occurences of " << targetNumber << " is: " << count;

}