/*
Author: Stanley Su
Course: CSCI 136
Instructor: Abdul Rafae Khan
Assignment: Lab 3 C

This program asks the user for a starting 
date and an ending date making it an 
interval. It uses this interval and 
determines which had higher elevation, 
the west or the east, or if they are 
equal.

*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

int main2()
{
	ifstream fin("Current_Reservoir_Levels.tsv");
	if(fin.fail()) 
	{
		cerr << "File cannot be opened for reading." << endl;
		exit(1);
	}
		
	string junk;
	getline(fin, junk);	
	
	string date, date1, date2;
	bool interval; 
	double eastSt, eastEl, westSt, westEl;

	cout << "Enter starting date: ";
	cin >> date1;
	cout << endl << "Enter ending date: ";
	cin >> date2; 
	interval = false;
	
	while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
	{
		if(date1 == date)
		{
			interval = true;
		}

		if(interval == true)
		{
			if(eastEl > westEl)
			{
				cout << date << " East" << endl;
			}
			else if(eastEl < westEl)
			{
				cout << date << " West" << endl;
			}
			else 
			{
				cout << date << " Equal" << endl;
			}
		
			if(date2 == date)
			{
				interval = false;
			}
		}
	}
	
	fin.close();
	system("pause");
	return 0;
}


