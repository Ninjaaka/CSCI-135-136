/*
Author: Stanley Su
Course: CSCI 136
Instructor: Abdul Rafae Khan
Assignment: Lab 4 G

This program asks for an input
width and height and it prints
out a checkboard of 3 by 3 
squares.

*/

#include <iostream>
using namespace std;

int main()
{
	int width, height, counterCol, counterRow, counter;

	cout << "Input width: ";
	cin >> width;
	cout << "Input height: ";
	cin >> height;

	counterCol = 0;
	counterRow = 0;
	counter = 0;

	cout << endl << "Shape: " << endl;

	for (int row = 0; row < height; row++)
	{

		counterCol = 0;

		if (counterRow != 3)
		{
			cout << endl;
			
			for (int col = 0; col < width;)
			{
				if (counterCol != 3)
				{
					cout << "*";
					col += 1;
				}

				counterCol = counterCol + 1;

				if (col != width)
				{
					if (counterCol == 3)  //Avoid multiple of 3 numbers printing spaces at the end
					{
						if (col + 2 == width)
						{
							cout << "  ";
							counterCol = 0;
							col += 2;
						}
						else if (col + 1 == width)
						{
							cout << " ";
							counterCol = 0;
							col += 1;
						}
						else
						{
							cout << "   ";
							counterCol = 0;
							col += 3;
						}
					}
				}

			}
		}

		if (row + 1 == height)	//Avoid 9x9 error
		{
			break;
		}

		counterRow = counterRow + 1;
		counter += 1;

		if ((height <= 3) && (counterRow == 3))
		{
			break;
		}

		//Reverse checkerboard

		if (counterRow == 3)
		{
			for (int i = 0; i < 3; i++)
			{
				row += 1;
				counterCol = 0;
				cout << endl;
				counter += 1;

				if (counter > height)
				{
					break;
				}

				for (int col = 0; col < width;)
				{
					if (counterCol != 3)
					{
						cout << " ";
						col += 1;
					}

					counterCol = counterCol + 1;

					if (col != width)
					{
						if (counterCol == 3)  //Avoid multiple of 3 numbers printing spaces at the end
						{
							if (col + 2 == width)
							{
								cout << "**";
								counterCol = 0;
								col += 2;
							}
							else if (col + 1 == width)
							{
								cout << "*";
								counterCol = 0;
								col += 1;
							}
							else
							{
								cout << "***";
								counterCol = 0;
								col += 3;
							}
						}
					}
				}
			}

			counterRow = 0;

		}
	}

	cout << endl << endl;
	system("pause");
	return 0;
}