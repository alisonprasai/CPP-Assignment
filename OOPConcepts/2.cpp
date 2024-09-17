/*Write a C++ program to implement a class called Date that has private member
variables for day, month, and year. Include member functions to set and get these
variables, as well as to validate if the date is valid.*/

#include <iostream>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Default constructor
    Date() : day(1), month(1), year(2000) {}

    // Parameterized constructor
    Date(int day, int month, int year) {
        setDate(day, month, year);
    }

    bool leapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    bool isValid(int day, int month, int year) {
        if (year < 0) {
            return false;
        }

        if (month < 1 || month > 12 || day < 1) {
            return false;
        }

        int allMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (month == 2 && leapYear(year)) {
            allMonths[1] = 29;
        }

        if (day > allMonths[month - 1]) {
            return false;
        }
        return true;
    }

    void setDate(int day, int month, int year) {
        if (isValid(day, month, year)) {
            this->day = day;
            this->month = month;
            this->year = year;
        } else {
            cout << "Invalid date!" << endl;
        }
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    void dateShow() const {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date date;

    int day, month, year;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    date.setDate(day, month, year);

    date.dateShow();

}
