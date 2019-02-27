#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std; 

int main()
{
	ifstream people("people.txt");
	if (people.fail())
	{
		cerr << "File cannot be opened for reading." << endl;
		exit(1);
	}

	string name, oldestName, name2nd, name3rd;
	int age, numberPeople, oldestAge, counter, secondOldest, thirdOldest;
	double averageAge = 0;

	counter = 0;
	string nameArray[200];
	int ageArray[200];
	int index = -1;

	numberPeople = 0;
	oldestAge = 0;

	while (people >> name >> age)
	{
		if (age > oldestAge)
		{
			oldestAge = age;
			oldestName = name;
		}

		nameArray[counter] = name;
		ageArray[counter] = age;
		counter += 1;

		averageAge += age;

		numberPeople += 1;
	}

	averageAge = averageAge / numberPeople;

	int size = sizeof(ageArray) / sizeof(ageArray[0]);

	secondOldest = 0;
	for (int i = 0; i < size; i++)
	{
		if (ageArray[i] > secondOldest && ageArray[i] < oldestAge)
		{
			secondOldest = ageArray[i];
		}
	}
		

	thirdOldest = 0;
	for (int i = 0; i < size; i++)
	{
		if (ageArray[i] > thirdOldest && ageArray[i] < secondOldest)
		{
			thirdOldest = ageArray[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (ageArray[i] == secondOldest)
		{
			index = i;
			name2nd = nameArray[i];
			break;
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (ageArray[i] == thirdOldest)
		{
			index = i;
			name3rd = nameArray[i];
			break;
		}
	}

	cout << "Number of People:                     " << numberPeople << endl;
	cout << "Name of Oldest Person:                " << oldestName << endl;
	cout << "Average Age:                          " << averageAge << endl;
	cout << "Name of 2nd and 3rd Oldest Person:    " << name2nd << " and " << name3rd << endl;
	 
	people.close();
	system("pause");
	return 0;
}