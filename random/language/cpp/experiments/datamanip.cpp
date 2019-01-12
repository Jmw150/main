/*
    Old code, has many useful things in it

*/

#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

void setDecimalPlace(int a); //'a' should be a positive number
void sort(double a[], int numberUsed);
//Precondition: numberUsed <= declared size of the array a.
//The array elements a[0] through a[numberUsed - 1] have values.
//Postcondition: The values of a[0] through a[numberUsed - 1] have
//been rearranged so that a[0] <= a[1] <= ... a[numberUsed - 1].
void swapValues(double& v1, double& v2);
//Interchanges the values of v1 and v2.
int indexOfSmallest(const double a[], int startIndex, int numberUsed);
//Precondition: 0 <= startIndex < numberUsed. Reference array elements
//have values. Returns the index i such that a[i] is the smallest of the
//values a[startIndex], a[startIndex + 1], ..., a[numberUsed - 1].

int main()
{
    fstream data;
    const int ARRAY_SIZE = 100;
    double x[ARRAY_SIZE], z[ARRAY_SIZE];
    double bucket = 0;
    double bucket2 = 0;
    int i = 0;
    double a,b,e;
    
    data.open(
    "/home/jordan/Documents/math learned so far");
    while (data >> bucket) //grab data
    {
        x[i] = bucket;
        i++;
    }
    cout << "Data has " << i << " objects. \n\n";
    /* for (int n = 0 ; n < i ; n++) //to print data
    {
        cout << x[n] << " ";
    } */ 
    bucket = 0;
    for (int n = 0 ; n < i ; n++)
    {
        bucket += x[n];
    }
    double hrWeek = bucket/i;
    double hrDay = bucket/i * (1/7.0);
    double percentLife = bucket/(i*7*24);
    double percentAwake = bucket/(i*7*10);
    double percentQuota = bucket/(i*49);
    for (int j = 0 ; j <= i ; j++) {z[j] = pow ((bucket2-x[j]), 2);};
    for (int j = 0 ; j <= i ; j++) {bucket2 += z[j];}; //st dev
    double standardDev = pow (bucket2/i, (1/2.0));
    double tempArray[i];
    for (int j = 0 ; j <= i ; j++) {
        tempArray[j] = x[j];
    }
    sort(tempArray, i); //median, skew
    double zScore = (hrWeek-tempArray[i])/standardDev;
    
    double averageX = ((i*(i+1))/2.0)/i;
    bucket2 = 0;
    double bucket3 = 0;
    for (int j = 0; j <= i; j++)
    {
        bucket2 += ((j+1)-averageX)*(x[j]-hrWeek);
    }
    for (int j = 0 ; j <= i ; j++)
    {
        bucket3 += pow(((j+1)- averageX),2);
    }
    b = bucket2/bucket3;
    a = hrWeek - (b*averageX);
    double trend = (b*70)+a;
    
    double quotaSoft = ((45*16) - bucket)/86;
    string winEasy, winHard;
    if (trend <= quotaSoft)
        winEasy = "very close";
    else winEasy = "yep";
    double quotaHard = 45;
    if (trend <= quotaHard)
        winHard = "Oh God no. lol";
    else winHard = "yep";
    setDecimalPlace(2);
    cout<< "Total hours spent on studies: " << bucket << endl
        << "Hours per week: " << hrWeek << endl
        << "Hours per day: " << hrDay << endl
        << "High score (for hrs): " << tempArray[i-1] << endl
        << "Proportion of last " << i << " weeks spent on this project: " 
        << percentLife << endl
        << "Proportion of waking hours: " << percentAwake << endl
        << "Proportion of a more realistic quota: " << percentQuota << "\n\n"
        << "Standard deviation: " << standardDev << endl
        << "Median: " << tempArray[i/2] << endl; //median-1 instead of true med for odd
    setDecimalPlace(4);
    cout<< "Skew: " << (hrWeek - tempArray[i/2])/standardDev << endl;
    setDecimalPlace(2);
    cout<< "Last week's Z Score (std devs from mean): " << zScore << endl
        << "Linear regression: y = " << b << " x + " << a << endl
        << "Assuming trend continues, am I on target for fall? "
        << winEasy << endl
        << "Am I meeting the ideal? " << winHard << endl;
    data.close();
    return 0;
}

void sort (double a[], int numberUsed)
{
    int indexOfNextSmallest;
    for (int index = 0; index < numberUsed - 1; index++)
    {//Place the correct value in a[index]:
        indexOfNextSmallest = 
                indexOfSmallest(a, index, numberUsed);
        swapValues(a[index], a[indexOfNextSmallest]);
        //a[0] <= a[1] <= ... <= a[index] are the smallest of the
        //original array elements. The rest of the
        //elements are in the remaining positions.
    }
}
void swapValues(double& v1, double& v2)
{
    double temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}
int indexOfSmallest(const double a[], int startIndex, int numberUsed)
{
    int min = a[startIndex], 
            indexOfMin = startIndex;
    for (int index = startIndex + 1; index < numberUsed; index++)
        if (a[index] < min)
        {
            min = a[index];
            indexOfMin = index;
            //min is the smallest of a[startIndex] through a[index]
        }
    return indexOfMin;
}
void setDecimalPlace(int a)
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(a);
}
