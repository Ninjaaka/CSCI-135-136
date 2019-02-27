/*
Author: Stanley Su
Course: CSCI135
Assignment: Project 1 A

This program opens the number.txt file and 
sums the all the numbers in the txt file

*/

#include <iostream>
#include <cstdlib>
//#include <fstream>
using namespace std;

int main()
{
	int sum = 0;
	
	/*ifstream file("numbers.txt");

	if (file.fail())
	{
		cerr << "Unable to open file" << endl;
		exit(1); 
	}*/

	int num;

	while(cin >> num) 
	{
		sum += num;
	}

	cout << endl << "The sum of all numbers is " << sum << endl << endl;

	//file.close();

	return 0;
}