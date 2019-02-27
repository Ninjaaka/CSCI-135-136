/*
Author: Stanley Su
Course: CSCI 136
Instructor: Abdul Rafae Khan
Assignment: Lab 1 D

This program asks the user for a 
year and a month. Then it prints 
the number of days in that month, 
also taking into account if it is 
a leap year or a common year 
which influences the number of 
days for the month of February.
*/

#include <iostream>
using namespace std;

int main()
{
	int year, month;
	cout << "Enter year: ";
	cin >> year;
	cout << endl << "Enter month: ";
	cin >> month;

	if (year % 4 != 0)
	{
		if (month == 2)
		{
		cout << endl << "28 days" <<endl;
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
		cout << endl << "31 days" << endl;
		}
		else
		{
		cout << endl << "30 days" << endl;
		}
	}
	else if (year % 100 != 0)
	{
		if (month == 2)
		{
		cout << endl << "29 days" <<endl;
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
		cout << endl << "31 days" << endl;
		}
		else
		{
		cout << endl << "30 days" << endl;
		}	
	}
	else if (year % 400 != 0)
	{
		if (month == 2)
		{
		cout << endl << "28 days" <<endl;
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
		cout << endl << "31 days" << endl;
		}
		else
		{
		cout << endl << "30 days" << endl;
		}
	}
	else
	{
		if (month == 2)
		{
		cout << endl << "29 days" <<endl;
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
		cout << endl << "31 days" << endl;
		}
		else
		{
		cout << endl << "30 days" << endl;
		}
	}
	
	system("pause");
	return 0;
}
