// tells ae of something
// could be imporved to include new years day
// and automatically get current date

#include <iostream>
#include <math.h>
using namespace std;


int main () 
{

    enum MonthLength {JAN_LENGTH = 31, FEB_LENGTH = 28, MAR_LENGTH = 31,
    APR_LENGTH = 30, MAY_LENGTH = 31, JUN_LENGTH = 30, JUL_LENGTH = 31, 
    AUG_LENGTH = 31, SEP_LENGTH = 30, OCT_LENGTH = 31, NOV_LENGTH = 30, 
    DEC_LENGTH = 31};

    int yearToday, monthToday, dayToday, yearBirth, monthBirth, dayBirth;
    int mToday, mBirth, difDay, difYear;


    cout << "What is today's date? (year, month, day) \n";
    cin >> yearToday >> monthToday >> dayToday;
    cout << yearToday << "/" << monthToday << "/" << dayToday << endl;
    cout << "Date in the past? \n";
    cin >> yearBirth >> monthBirth >> dayBirth;
    cout << yearBirth << "/" << monthBirth << "/" << dayBirth << endl;
    
    switch ( 7 /*monthToday*/)
    {
        case 12: mToday += DEC_LENGTH;
        case 11: mToday += NOV_LENGTH;
        case 10: mToday += OCT_LENGTH;
        case 9: mToday += SEP_LENGTH;
        case 8: mToday += AUG_LENGTH;
        case 7: mToday += JUL_LENGTH;
        case 6: mToday += JUN_LENGTH;
        case 5: mToday += MAY_LENGTH;
        case 4: mToday += APR_LENGTH;
        case 3: mToday += MAR_LENGTH;
        case 2: mToday += FEB_LENGTH;
        case 1: mToday += JAN_LENGTH; break;
        default: cout << "We only have 12 months.";           
    }        
    switch (monthBirth)
    {
        case 12: mBirth += DEC_LENGTH;
        case 11: mBirth += NOV_LENGTH;
        case 10: mBirth += OCT_LENGTH;
        case 9: mBirth += SEP_LENGTH;
        case 8: mBirth += AUG_LENGTH;
        case 7: mBirth += JUL_LENGTH;
        case 6: mBirth += JUN_LENGTH;
        case 5: mBirth += MAY_LENGTH;
        case 4: mBirth += APR_LENGTH;
        case 3: mBirth += MAR_LENGTH;
        case 2: mBirth += FEB_LENGTH;
        case 1: mBirth += JAN_LENGTH; break;
        default: cout << "We only have 12 months.";           
    }
    
    difDay = (365*yearToday+mToday+dayToday)-(365*yearBirth+mBirth+dayBirth);
    difYear = difDay/365;
    cout << "That was this ling ago\n" 
         << "Days: " << difDay << endl 
         << "Years: "<< difYear << " plus days: " << difDay % 365 << endl;
    
    
    return 0;
}
