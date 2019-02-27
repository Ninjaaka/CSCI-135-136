/*
Author: Stanley Su
Course: CSCI 135
Assignment: Project 1 B

This program takes formula.txt file, which contains 
numbers and signs (+/-). It will perform the calculation 
according to the signs assigned.

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
	
	while (cin >> sign)	//Read 
	{
		cin >> num;
		
		if (sign == '+')
		{
			sum += num;
		} 
		else if (sign == '-') 
		{
			sum -= num;
		}
	}

	cout << endl << "The result is = " << sum << endl;

	return 0;
}