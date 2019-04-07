#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n = 0;
  int sum = 0;
  vector<int> digits;
  cout << "Enter a number less than or equal to 100,000: " << endl;
  cin >> n;
  bool finished = false;
  if(n >= 0)
  {
    while(!finished)
    {
      string number = to_string(n);
      for(int i = 0; i < number.size(); i++)
      {
        digits.push_back(stoi(number.substr(i,1)));
      }
      for(int k = 0; k < digits.size(); k++)
      {
        sum+=digits.at(k);
      }
      if(n % sum == 0)
      {
        finished = true;
        cout << "The smallest magic number is " << n << endl;
      }
      else
      {
        //cout << digits.size() << endl;
        sum = 0;
        n++;
        digits.clear();
      }
    }
  }
  else
  {
    cout << "That number is negative, try a positive number" << endl;
  }


}
