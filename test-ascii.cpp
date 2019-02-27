/*
Author: Stanley Su
Course: CSCI 136
Instructor: Abdul Rafae Khan
Assignment: Lab 7 A

This program asks the user for an input. It extracts each character from 
the string an it prints out the letter followed by its ASCII code next to it.

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cout << "Input: ";
	getline(cin, input);	//Read user input including white-spaces

	int size = input.size();	//Determine size of string
	for (int i = 0; i < size; i++)
	{
		char letter = input[i];
		cout << letter << " " << (int)letter << endl;
	}
	
	cout << endl;
	return 0;
}