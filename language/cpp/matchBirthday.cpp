//this program gives the age difference between user and Bach
#include <iostream>
#include <cstdlib>
using namespace std;

class DayOfYear
{
public:
	void Input();
	void Output();
	void set(int NewMonth, int NewDay);
	void set(int NewMonth);
	int GetMonthNumber();
	int GetDay();
private:
	int Month;
	int Day;
};

int main ()
{
	DayOfYear Today, BachBirthday;
	cout << "Enter today's date:\n";
	Today.Input();
	cout << "Today's date is ";
	Today.Output();
	cout << endl;

	BachBirthday.set(3, 21);
	cout << "J. S. Bach's birthday is ";
	BachBirthday.Output();
	cout << endl;
	if ( Today.GetMonthNumber() == BachBirthday.GetMonthNumber()
			&& Today.GetDay() == BachBirthday.GetDay()
       )
		cout << "Happy Birthday\n";
	else 
		cout << "Happy Unbirthday\n";
	return 0;
}

void DayOfYear::set(int NewMonth, int NewDay)
{
	if ((NewMonth >= 1) && (NewMonth <= 12))
		Month = NewMonth;
	else 
	{
		cout << "Illegal month value! Program aborted.\n";
		exit(1);
	}
	if ((NewDay >= 1) && (NewMonth <= 31))
		Day = NewDay;
	else 
	{
		cout << "Illegal month value! Program aborted.\n";
		exit(1);
	}
}

void DayOfYear::set(int NewMonth)
{
	if ((NewMonth >= 1) && (NewMonth <= 12))
		Month = NewMonth;
	else 
	{
		cout << "Illegal month value! Program aborted.\n";
		exit(1);
	}
	Day = 1;
}

int DayOfYear::GetMonthNumber()
{
	return Month;
}

int DayOfYear::GetDay()
{
	return Day;
}

//Uses iostream and cstdlib
void DayOfYear::Input()
{
	cout << "Enter the month as a number: ";
	cin >> Month;
	cout << "Enter the day of the month: ";
	cin >> Day;
	if ((Month < 1) || (Month > 12) || (Day < 1) || (Day > 31))
	{
		cout << "Illegal date! Program aborted.\n";
		exit(1);
	}
}

void DayOfYear::Output()
{
	switch (Month)
	{
		case 1: cout << "January "; break;
		case 2: cout << "February "; break;
		case 3: cout << "March "; break;
		case 4: cout << "April "; break;
		case 5: cout << "May "; break;
		case 6: cout << "June "; break;
		case 7: cout << "July "; break;
		case 8: cout << "August "; break;
		case 9: cout << "September "; break;
		case 10: cout << "October "; break;
		case 11: cout << "November "; break;
		case 12: cout << "December "; break;
		default:
			cout << "Error in DayOfYear::Output.";
	}
	cout << Day;
}
