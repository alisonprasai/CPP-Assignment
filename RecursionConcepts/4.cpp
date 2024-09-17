// Write a C++ program to reverse a string using recursion. 

#include <iostream>
#include <string>

using namespace std;

void reverse(string &name, int a, int b) { 
    if (a >= b) {
        return;
    }

    swap(name[a], name[b]);
    reverse(name, a + 1, b - 1);
}

int main() {
    string name;

    cout << "Enter a string: ";
    getline(cin, name);

    reverse(name, 0, name.length() - 1);

    cout << "Reversed string: " << name << endl;

}
