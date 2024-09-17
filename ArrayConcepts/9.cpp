// Write a C++ program to find the third largest string in a given array of strings.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string names[] = {"javascript", "python", "java", "c++" ,"ruby", "go", "swift", "kotlin", "scala"};

    int n = sizeof(names)/sizeof(names[0]);
    

    nth_element(names, names + 2, names + n, greater<string>());
    
    
    string third_largest = names[2];
    
    cout << "The third largest string is: " << third_largest << endl;
    
}
