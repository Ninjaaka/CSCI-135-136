/*
Author: Stanley Su
Course: CSCI 136
Instructor: Abdul Rafae Khan
Assignment: Lab 7 D

This program asks the user for a plain text, 
a shift number for Caesar encryption and a 
keyword for Vigenere encryption. It will then 
use these values to compute the encrypted string 
followed by the decrpypted string for both, 
the Caesar and Vigerene method.

*/

#include <iostream>
#include <string>
using namespace std;

bool encryptC = true;
bool encryptV = true;

char shiftCharC(char c, int shift)	//Shifting function for Caesar
{
	if (encryptC == true)
	{
		if (isalpha(c))
		{
			if (((int)c >= 97) && ((int)c <= 122))
			{
				int offset = (int)c - 97 + shift;
				int wrap = offset % 26;
				char wrapC = wrap + 97;

				return wrapC;
			}

			if (((int)c >= 65) && ((int)c <= 90))
			{
				int offset = (int)c - 65 + shift;
				int wrap = offset % 26;
				char wrapC = wrap + 65;

				return wrapC;
			}
		}
	}
	else
	{
		if (isalpha(c))
		{
			if (((int)c >= 97) && ((int)c <= 122))
			{
				int shift2 = (int)c - shift;
				char shiftedChar = (char)shift2;
				if (shift2 < 97)
				{
					shift2 = 122 - (shift - ((int)c - 96));
					shiftedChar = (char)shift2;
				}
			
				return shiftedChar;
			}

			if (((int)c >= 65) && ((int)c <= 90))
			{
				int shift2 = (int)c - shift;
				char shiftedChar = (char)shift2;
				if (shift2 < 65)
				{
		
					shift2 = 90 - (shift - ((int)c - 64));
					shiftedChar = (char)shift2;
				}

				return shiftedChar;
			}
		}
	}
	
	return c;

}

string encryptCaesar(string plaintext, int shift)	//String function
{
	string cypherText;
	int size;
	size = plaintext.size();
	encryptC = true;

	for (int i = 0; i < size; i++)
	{
		cypherText += shiftCharC(plaintext[i], shift);

	}

	return cypherText;
}

string decryptCaesar(string plaintext, int shift)
{
	string cypherText;
	int size;
	size = plaintext.size();
	encryptC = false;

	for (int i = 0; i < size; i++)
	{
		cypherText += shiftCharC(plaintext[i], shift);
	}

	return cypherText;
}

int keywordCounter = 0;

char shiftCharV(char c, string keyword)
{
	if (encryptV == true)
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
	}

	else
	{
		if (isalpha(c))
		{

			if (((int)c >= 97) && ((int)c <= 122))	//If c is lowercase
			{
				int shift = (((int)keyword[keywordCounter]) - 96) - 1;
				char shiftedChar = c - shift;
				if (shiftedChar < 97)	//If alphabet needs to wrap around	
				{
					int wrap = 122 - (shift - (int(c) - 96));
					return shiftedChar = (char)wrap;
				}
				return shiftedChar;
			}

			if (((int)c >= 65) && ((int)c <= 90))	//If c is uppercase
			{
				int shift = (((int)keyword[keywordCounter]) - 64) - 1;
				char shiftedChar = c - (shift - 32);	//Converts lowercase to uppercase with 32
				if (shiftedChar < 65)	//If alphabet needs to wrap around
				{
					int wrap = 90 - ((shift - 32) - (int(c) - 64));
					return shiftedChar = (char)wrap;
				}
				return shiftedChar;
			}

		}
	}
	

	keywordCounter -= 1;
	return c;

}

string encryptVigenere(string plaintext, string keyword)
{
	string cipherText;
	int tSize, wSize;
	tSize = plaintext.size();
	wSize = keyword.size();
	encryptV = true;

	for (int i = 0; i < tSize; i++)
	{
		cipherText += shiftCharV(plaintext[i], keyword);

		keywordCounter += 1;
		if (keywordCounter == wSize)
		{
			keywordCounter = 0;
		}
	}

	keywordCounter = 0;
	return cipherText;
}

string decryptVigenere(string plaintext, string keyword)
{
	string cipherText;
	int tSize, wSize;
	tSize = plaintext.size();
	wSize = keyword.size();
	encryptV = false;

	for (int i = 0; i < tSize; i++)
	{
		cipherText += shiftCharV(plaintext[i], keyword);

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
	int lshift;

	cout << "Enter plaintext: ";
	getline(cin, plaintext);

	//Caesar Encryption

	cout << endl << endl << "  = Caesar =" << endl;

	cout << "Enter shift: ";
	cin >> lshift;

	cout << "Cipher text: " << encryptCaesar(plaintext, lshift) << endl;
	cout << "Decrypted: " << decryptCaesar(encryptCaesar(plaintext, lshift), lshift) << endl;
	
	//Vigenere Encryption

	cout << endl << endl << "  = Vigenere =" << endl;

	cout << "Enter keyword: ";
	cin >> keyword;

	cout << "Cipher text: " << encryptVigenere(plaintext, keyword) << endl;
	cout << "Decrypted: " << decryptVigenere(encryptVigenere(plaintext, keyword), keyword) << endl << endl;

	system("pause");
}