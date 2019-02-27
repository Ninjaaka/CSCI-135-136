/*
Author: Stanley Su
Course: CSCI 135
Assignment: Project 1 C

This program takes formula.txt file, which contains
numbers and signs (+/-). It will perform the calculation
according to the signs assigned. It is able to perform
multiple formulas as long as they separated with a " ; ".

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int num;
	int sum = 0;
	char sign;

	cin >> sum;

	while (cin >> sign)	//Read each char 
	{
		cin >> num;

		if (sign == ';')
		{
			cout << "The sum is " << sum << endl;
			sum = num;
		}
		else if (sign == '+')
		{
			sum += num;
		}
		else if (sign == '-')
		{
			sum -= num;
		}
	}

	return 0;
}