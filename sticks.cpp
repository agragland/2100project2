#include <string>
#include <iostream>
#include <vector>

using namespace std;
int stickNumbers[] = {6,2,5,5,4,5,6,3,7,6};

int calculateLargestNumber(int sticks)
{

  int totalSticks = sticks;
  int currSticks = 0;
  string ret = "";
  int largestVal;
  while(sticks != 0)
  {
    currSticks = 0;
    currSticks++;
    sticks--;
    while(currSticks != 0)
    {
    currSticks++;
    sticks--;

      for(int i = 0; i < 10; i++)
      {

        if((currSticks % stickNumbers[i] == 0) && sticks != 1 && currSticks != 0)
        {
          ret = to_string(i) + ret;
          currSticks = 0;
        }
      }
    }
  }
  largestVal = stoi(ret);
  return largestVal;
}



int main()
{
  int sticks = 0;
  cout << "Enter a number of sticks between 2 and 100: " << endl;
  cin >> sticks;
  if(sticks < 100)
  {
    int largestNum = calculateLargestNumber(sticks);
    cout << "Largest Val: " << largestNum << endl;
  }
}
