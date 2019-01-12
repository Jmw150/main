//broken, demonstration of time library

#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;
double timeDifference(int day, int month, int year);

int main ()
{
    int day=3, int month, int year
    time_t now;
    struct tm start;
    double seconds;
    
    time(&now);  /* get current time; same as: now = time(NULL)  */
    
    start = *localtime(&now);
    
    start.tm_hour = 0; start.tm_min = 0; start.tm_sec = 0;
    start.tm_mon = month-1;  start.tm_mday = day; start.tm_year = year-1900;
    
    seconds = difftime(now,mktime(&start));
    
    (seconds/ (60*60*24)); //returns day
    return 0;
}

double timeDifference(int day, int month, int year)
{
    time_t now;
    struct tm start;
    double seconds;
    
    time(&now);  /* get current time; same as: now = time(NULL)  */
    
    start = *localtime(&now);
    
    start.tm_hour = 0; start.tm_min = 0; start.tm_sec = 0;
    start.tm_mon = month-1;  start.tm_mday = day; start.tm_year = year-1900;
    
    seconds = difftime(now,mktime(&start));
    
    return (seconds/ (60*60*24)); //returns day
}
