#include <string>
#include <iostream>
#include <vector>

using namespace std;
int stickNumbers[] = { 6,2,5,5,4,5,6,3,7,6 };

string calculateLargestNumber(int sticks)
{

	int totalSticks = sticks;
	int currSticks = 0;
	string ret = "";
	int largestVal;
	while (sticks != 0)
	{
		currSticks = 0;
		currSticks++;
		sticks--;
		while (currSticks != 0)
		{
			currSticks++;
			sticks--;

			for (int i = 0; i < 10; i++)
			{

				if ((currSticks % stickNumbers[i] == 0) && sticks != 1 && currSticks != 0)
				{
					ret = to_string(i) + ret;
					currSticks = 0;
				}
			}
		}
	}
	
	return ret;
}



int calculateSmallestNumber(int sticks)
{
	int totalSticks = sticks;
	int currSticks = 0;
	string ret = "";
	int smallestVal;
	
	int numofeights;
	int remainder = sticks % 7;
	if (sticks == 3)
	{
		return 7;
	}
	else if (sticks == 4)
	{
		return 4;
	}
	else if (sticks == 5)
	{
		return 2;
	}
	else if (sticks == 6)
	{
		return 6;
	}

	if(remainder <= 4 && remainder >= 1 && remainder != 2 && remainder != 3)
	{
		numofeights = (sticks - 7 - remainder) / 7;
	}
	else if (remainder == 3)
	{
		numofeights = (sticks - 14 - remainder) / 7; 
	}
	else
	{
		numofeights = (sticks - remainder) / 7;
	}
	for (int i = 0; i < numofeights; i++)
	{
		ret = "8" + ret;
	}
	if (remainder == 1)
	{
		ret = "10" + ret;
	}
	else if (remainder == 2)
	{
		ret = "1" + ret;
	}
	else if (remainder == 3)
	{
		ret = "200" +ret;
	}
	else if (remainder == 4)
	{
		ret = "20" + ret;
	}
	else if (remainder == 5)
	{
		ret = "2" + ret;
	}
	else if (remainder == 6)
	{
		ret = "6" + ret;
	}

	smallestVal = stoi(ret);
	return smallestVal;
}



int main()
{
	int sticks = 0;
	cout << "Enter a number of sticks between 2 and 100: " << endl;
	cin >> sticks;
	if (sticks < 100)
	{
		string largestNum = calculateLargestNumber(sticks);
		int smallestNum = calculateSmallestNumber(sticks);

		cout << "Largest Val: " << largestNum << endl;
		cout << "Smallest Val: " << smallestNum << endl;
	}
}
