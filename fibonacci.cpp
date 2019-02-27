/*
Author: Stanley Su
Course: CSCI 136
Instructor: Abdul Rafae Khan
Assignment: Lab 2 D

This program prints the
fibonacci sequence from
0 to 60 using arrays.

*/

#include <iostream>
using namespace std;

int main()
{
	int fib[60];
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i < 60; i++)
	{ 
		fib[i] = fib[i - 1] + fib[i - 2];
	}
		
	for (int i = 0; i < 60; i++)
	{
		cout << fib[i] << endl;
	}

	system("pause");
	return 0;
}