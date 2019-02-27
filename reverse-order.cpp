/*
Author: Stanley Su
Course: CSCI 136
Instructor: Abdul Rafae Khan
Assignment: Lab 3 D

This program asks the user for an
earlier date and an later date, making
it an interval. Using this interval, 
the program will print the dates along 
with their West basin elevation in 
reverse chronological order.

*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

/*int main()
{
	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail())
	{
		cerr << "File cannot be opened for reading." << endl; 
		exit(1);
	}

	string junk;
	getline(fin, junk);

	string date, date1, date2;
	bool interval;
	double eastSt, eastEl, westSt, westEl;

	cout << "Enter earlier date: ";
	cin >> date1;
	cout << endl << "Enter later date: ";
	cin >> date2;
	cout << endl;

	interval = false;
	int size = 0;

	string dateArray[375];
	double elevArray[375];

	while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
	{
		if (date1 == date)
		{
			interval = true;
		}
		if (interval == true)
		{
			size = size + 1;
			dateArray[size] = date;          //Inserts dates into array for dates
			elevArray[size] = westEl;		 //Inserts elevation into array for elevations
		}
		if (date2 == date)
		{
			interval = false;
		}
	}
	
	for (int i = size; i > 0; i--)   //Displays array in reverse
	{
		cout << dateArray[i] << " " << elevArray[i] << " ft" << endl;
	}

	cout << endl;

	fin.close();
	system("pause");
	return 0;
}*/


