// A program to convert base 10 into other bases
// by: Jordan Winkler

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class InVal
{
public:
    void PrintAsBase(int base);
    InVal();
    void init_val(int, int);

private:
    int num;
    int base;		
};

int main()
{
	int base;
	int num;
	InVal num_c;
	
	cout << "Please enter the number you wish to convert:\n";

	cin >> num;

	if (cin.fail())
	{
		cout << "This is not a valid input.\n\n";
		return 1;
	}

	cout << "Enter the base you wish to convert to: (max 25)\n";

	cin >> base;

	if (cin.fail())
	{
		cout << "This is not a valid input.\n\n";
		return 1;
	}

	if (base < 2 || base > 25) //to lengthen base
	{
		cout << "You have entered a base that is outside of\n"
		     << "the valid range.\n\n";
		return 1;
	}

	num_c.init_val(num,10);

	cout << "Your number is: ";
	num_c.PrintAsBase(base);
}

InVal::InVal()
{
	num = base = 0;
}

void InVal::init_val(int in_num, int in_base)
{
	num = in_num;
	base = in_base;
}

void InVal::PrintAsBase(int out_base)
{
	string digits("0123456789ABCDEFGHIJKLMNO"); //to lengthen base
	string result;
	int in_num = num;
	int in_base = out_base;

	for (; in_num; in_num /= in_base) //the number theory bit
	{
		result.insert(result.begin(), digits[abs(in_num % in_base)]);
	}

	if (num < 0)
	{
		result.insert(result.begin(), '-');
	}

	cout << result << '\n';

}


