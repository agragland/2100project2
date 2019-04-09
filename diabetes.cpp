#include <string>
#include <iostream>

using namespace std;

int main()
{
  int totalPos;
  int emptyPos = 0;
  int filledPos;
  int found = 0;
  int priceReq = 0;
  int hasDrank = 0;
  int remainder;

  cout << "Enter the number of bottles he has in the morning: ";
  cin >> emptyPos;
  cout << "Enter the number of bottles he finds during the day: ";
  cin >> found;
  cout << "Enter the price to purchase a new bottle: ";
  cin >> priceReq;
if(emptyPos > 1000)
{
  cout << "The number of empty bottles entered exceeds the maximum limit (1000) please try again." << endl;
}
else if(found > 1000)
{
  cout << "The number of found bottles entered exceeds the maximum limit (1000) please try again." << endl;
}
else if((priceReq > 1000) || (priceReq < 1))
{
  cout << "The price requirement entered exceeds the minimum (1) or maximum (1000) limit please try again." << endl;
}
else
{
    totalPos = emptyPos + found;
    while((totalPos != 0) && !(totalPos < priceReq))
    {
      remainder = totalPos % priceReq;
      totalPos -= remainder;
      filledPos = totalPos/priceReq;
      totalPos = remainder;
      while (filledPos != 0) {
        hasDrank++;
        totalPos++;
        filledPos--;

        }
      }

  cout << "Your friend drank " << hasDrank << " bottle(s) during the day." << endl;
  }
}
