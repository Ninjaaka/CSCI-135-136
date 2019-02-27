/*
Author: Stanley Su
Course: CSCI 136
Instructor: Abdul Rafae Khan
Assignment: Lab 4 F

This program asks for an input width and 
height and displays a trapezoid using the 
width and height selected by the user. 
In case the input width and height do 
not match a trapezoid, it will print 
"Impossible shape".

*/

#include <iostream>
using namespace std;

int main()
{
	int width, height, spaces, stars;

	cout << "Input width: ";
	cin >> width;
	cout << "Input height: ";
	cin >> height;
	cout << endl;
	stars = width;

	if (stars - ((height - 1) * 2) <= 0)  
	{
		cout << "Impossible shape!";
		return 0;
	}

	cout << "Shape:" << endl << endl;
	

	for (int row = height; row > 0; row--)
	{

		for (int spaces = height - row; spaces > 0; spaces--)
		{
			cout << " ";
		}
		
		for (int col = 0; col < stars; col++)
		{
			cout << "*";
		}

		stars = stars - 2;

		cout << endl;
	}
	
	cout << endl << endl;
	return 0;
}