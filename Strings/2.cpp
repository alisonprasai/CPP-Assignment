/*Write a C++ program to capitalize the first letter of each word in a given string.
Words must be separated by only one space.*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    string words;
    cout << "Enter word(s) or sentence: ";
    getline(cin, words);


    for(int i = 0; i < words.length(); i++){
        if (i == 0){
            words[0] = toupper(words[0]);
        }
        if (words[i] == ' '){
            words[i+1] = toupper(words[i+1]);
        }
    }
    cout << words;
}