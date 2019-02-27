/*
Author: Stanley Su
Course: CSCI 135
Assignment: Project 1 D

This program takes formulas.txt file, which contains
numbers and signs (+/-). It will perform the calculation
according to the signs assigned. It is able to perform
multiple formulas as long as they separated with a " ; ".
It also includes the feature to square numbers.

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int num;
	char sign;
	bool sign2 = true;

	cin >> num;

	int result;

	result = num;

	while(cin >> sign) 
	{ 
	   
		if (sign == '+') 
		{
			cin >> num;
			result += num;
			sign2 = true;
        }

		else if (sign == '-') 
		{ 
			cin >> num;
			result -= num;
			sign2 = false;
        }

		else if (sign == '^') 
		{

			if (sign2 == true) 
			{
				result = result + (num * num);
				result -= num;
			}
			else if (sign2 == false) 
			{
				result = result - (num * num);
				result += num;
			}
			else
			{	
				result = num * num;	//If it is neither + or -
			}

        }

	    else if (sign == ';')		//Print and skip to next line
		{
			cout << result << endl;
			cin >> num;
			result = num;
			sign2 = true;
        }

    }

	return 0;
}