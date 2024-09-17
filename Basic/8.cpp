// Write a C++ program to compute the number of days in a month for a given year and month.

#include<iostream>

using namespace std;

int main(){

    int year, month;
    int days;

    cout << "Input Year: ";
    cin >> year;

    cout << "Input Month (01 - 12): ";
    cin >> month;

    //Year and month validity
    if( year <= 0 || month <= 0 || month > 12){
        cout << "The year or month mentioned is invalid. Please try again!" << endl;
        return 1;
    }

    //Check the years and months cases
    switch (month)
    {
    
    case 4: case 6: case 9: case 11: // For April, June, September, November
        days = 30;
        break;
    
    case 2: // For February
        
        //For leap year first
        if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ){
            days = 29;
        }
        else{
            days = 28;
        }
        break;
    
    default:
        days = 31;
        break;
    }

    cout << "Number of days of the year " << year << " and month " << month << " is: " << days;

}