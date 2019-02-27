/*
Author: Stanley Su
Course: CSCI 136
Instructor: Abdul Rafae Khan
Assignment: Lab 5 C

This program creates a function 
that returns the smalest prime greater
than n

*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d) //Divisible by 2nd integer or not  
{
	if (d == 0)
	{
		return false;
	}
	else if (n % d == 0)
	{
		return true; 
	}

	else
	{
		return false;
	}
} 

bool isPrime(int n) //Checks if number input is prime or not
{
	bool prime = true;

	if (n <= 1)
	{
		prime = false;
	}

	for (int i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;

}

int nextPrime(int n)
{
	int primeNext;

	if (isPrime(n + 1) == true)	//Adresses prime if n is 1 or 2
	{
		primeNext = n + 1; 
		return primeNext;
	}

	else if (n <= 0)	//If n negative, it will return 2
	{
		primeNext = 2;
		return primeNext;
	}

	for (int i = n + 1; i++;)
	{
		if (isPrime(i) == true)
		{
			primeNext = i;
			break;
		}
	}

	return primeNext;

}

int main()
{
	int n1;
	cout << "Enter integer: ";
	cin >> n1;

	cout << "The next prime is: " << nextPrime(n1) << endl;

}