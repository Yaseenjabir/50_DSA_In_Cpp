#include <iostream>

using namespace std;

int display_binary(int num)
{
  int ans = 0, power = 1;
  while (num > 0)
  {
    int rem = num % 2;
    num = num / 2;

    ans = ans + (rem * power);
    power = power * 10;
  }

  return ans;
}

int main()
{

  cout << display_binary(50) << endl;

  return 0;
}