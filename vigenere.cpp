/*
Author: Stanley Su
Course: CSCI 136
Instructor: Abdul Rafae Khan
Assignment: Lab 7 C

This program asks for a string and a keyword. 
Using the keyword which was input, it will perform 
a Vinagenere type encryption to the string.

*/

#include <iostream>
#include <string>
using namespace std;

int keywordCounter = 0;

char shiftChar (char c, string keyword)
{

	if (isalpha(c))
	{

		if (((int)c >= 97) && ((int)c <= 122))	//If c is lowercase
		{
			int shift = (((int)keyword[keywordCounter]) - 96) - 1;
			char shiftedChar = c + shift;
			if (c + shift > 122)	//If alphabet needs to wrap around	
			{
				int wrap = 96 + shift - (122 - (int)c);
				return shiftedChar = (char)wrap;
			}

			return shiftedChar;
		}

		if (((int)c >= 65) && ((int)c <= 90))	//If c is uppercase
		{
			int shift = (((int)keyword[keywordCounter]) - 64) - 1;
			char shiftedChar = c + (shift - 32);	//Converts lowercase to uppercase with 32
			if (c + (shift - 32) > 90)	//If alphabet needs to wrap around
			{
				int wrap = 64 + ((shift - 32) - (90 - (int)c));
				return shiftedChar = (char)wrap;
			}

			return shiftedChar;
		}

	}

	keywordCounter -= 1;
	return c;

}

string encryptVigenere (string plaintext, string keyword)
{
	string cipherText;
	int tSize, wSize;
	tSize = plaintext.size();
	wSize = keyword.size();

	for (int i = 0; i < tSize; i++)
	{
		cipherText += shiftChar(plaintext[i], keyword);

		keywordCounter += 1;
		if (keywordCounter == wSize)
		{
			keywordCounter = 0;
		}
	}

	return cipherText;
}

int main()
{
	string plaintext;
	string keyword;

	cout << "Enter plaintext: ";
	getline(cin, plaintext);

	cout << "Enter keyword: ";
	cin >> keyword;

	cout << "Cipher text: " << encryptVigenere(plaintext, keyword) << endl;

	
}