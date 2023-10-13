#include <iostream>

using namespace std;

int main (){
     int days;
    int years, months, remainingDays;
    
    cout << "Enter the number of days: ";
    cin >> days;
    
    years = days / 365;
    remainingDays = days % 365;
    months = remainingDays / 30;
    remainingDays = remainingDays % 30;
    
    cout << "Total number of years: " << years << endl;
    cout << "Total number of months: " << months << endl;
    cout << "Total number of days: " << remainingDays << endl;


    return 0;
}
