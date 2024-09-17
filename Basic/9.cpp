#include <iostream>
#include <ctime>

using namespace std;

int daysBetween(int year1, int month1, int day1, int year2, int month2, int day2) {
    tm t1 = {0};
    tm t2 = {0};

    t1.tm_year = year1 - 1900;
    t1.tm_mon = month1 - 1;
    t1.tm_mday = day1;

    t2.tm_year = year2 - 1900;
    t2.tm_mon = month2 - 1;
    t2.tm_mday = day2;

    time_t time1 = mktime(&t1);
    time_t time2 = mktime(&t2);

    return (int)((time2 - time1) / (60 * 60 * 24));
}

int main() {
    int year1, month1, day1, year2, month2, day2;

    cout << "Enter the first date (YYYY-MM-DD): ";
    cin >> year1 >> month1 >> day1;

    cout << "Enter the second date (YYYY-MM-DD): ";
    cin >> year2 >> month2 >> day2;

    int days = daysBetween(year1, month1, day1, year2, month2, day2);
    cout << "Days between " << year1 << "/" << month1 << "/" << day1 << " to " << year2 << "/" << month2 << "/" << day2 << " = " << days << endl;

}