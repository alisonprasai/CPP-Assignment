/*Write a C++ program to implement a class called Student that has private member
variables for name, class, roll number, and marks. Include member functions to
calculate the grade based on the marks and display the student's information*/

#include<iostream>
#include<string>

using namespace std;

class Student{

private:
    string name;
    int class1;
    int roll_num;
    int marks;

public:
    Student(string name, int class1, int roll_num, int marks){
        this->name = name;
        this->class1 = class1;
        this->roll_num = roll_num;
        this->marks = marks;
    }

    char marksCheck(){
        if (marks >= 90) {

            return 'A';

        } else if (marks >= 80) {

            return 'B';

        } else if (marks >= 70) {

            return 'C';

        } else if (marks >= 60) {
            return 'D';

        } else {

            return 'F';
        }
    }

    void studentDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Class: " << class1 << endl;
        cout << "Roll Number: " << roll_num << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << marksCheck() << endl;
    }

};

int main(){

    string name;
    int class1, roll_num, marks;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter class: ";
    cin >> class1;

    cout << "Enter roll number: ";
    cin >> roll_num;

    cout << "Enter marks: ";
    cin >> marks;

    cout << endl;

    Student student(name, class1, roll_num, marks);

    student.studentDetails();
}