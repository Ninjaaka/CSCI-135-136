/*
Author: Stanley Su
Course: CSCI 136
Instructor: Abdul Rafae Khan
Assignment: Lab 7 B

This program asks the user for a string and it uses the
caesar cypher encription method to encrypt the string
based on the shift. It also takes into account if the
number wraps.


*/

#include <iostream>
#include <string>
using namespace std;

char shiftChar(char c, int rshift)	//Shifting function
{

	if (isalpha(c))
	{
		if (((int)c >= 97) && ((int)c <= 122))
		{
			int offset = (int)c - 97 + rshift;
			int wrap = offset % 26;
			char wrapC = wrap + 97;

			return wrapC;
		}

		if (((int)c >= 65) && ((int)c <= 90))
		{
			int offset = (int)c - 65 + rshift;
			int wrap = offset % 26;
			char wrapC = wrap + 65;

			return wrapC;
		}

	}

	return c;

}

string encryptCaesar(string plaintext, int rshift)	//String function
{
	string cypherText;
	int size;
	size = plaintext.size();

	for (int i = 0; i < size; i++)
	{
		cypherText += shiftChar(plaintext[i], rshift);
	}

	return cypherText;
}

int main()
{
	string plaintext;
	int rshift;

	cout << "Enter plaintext: ";
	getline(cin, plaintext);

	cout << "Enter shift: ";
	cin >> rshift;

	cout << encryptCaesar(plaintext, rshift);
}

