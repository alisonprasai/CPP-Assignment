/*Write a C++ program to implement a class called Employee that has private
member variables for name, employee ID, and salary. Include member functions to
calculate and set salary based on employee performance.*/


#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string employeename, int empID, double employeesalary){
        this->name = employeename;
        this->employeeID = empID;
        this->salary = employeesalary;
    }


    void calculatedSalary(char checkPerformance){
        if(checkPerformance == 'A' || checkPerformance == 'a') {
            salary = salary * 2;
        }
        else if (checkPerformance == 'B' || checkPerformance == 'b'){
            salary = salary * 1.5;
        }
        else if(checkPerformance == 'C' || checkPerformance == 'c'){
            salary = salary / 1.2;
        }
    }

    void employeeInfo(){
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: Rs." << salary << endl;
    }
};

int main(){

    Employee employeeDetails("Alison Prasai", 12122000, 50000);

    cout << "The Employee Info is: " << endl;

    employeeDetails.employeeInfo();

    employeeDetails.calculatedSalary('A');

    cout << "The updated Salary is: " << endl;

    employeeDetails.employeeInfo();
}