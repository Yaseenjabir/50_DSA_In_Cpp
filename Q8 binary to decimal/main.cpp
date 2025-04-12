#include <iostream>
#include <math.h>

using namespace std;

int main()
{

  int n = 101;
  int ans = 0, i = 0;

  while (n != 0)
  {
    int digit = n % 10;
    // cout << "Digit is : " << digit << endl;
    if (digit == 1)
    {
      ans = ans + pow(2, i);
    }
    i++;
    n = n / 10;
  }

  // cout << "Answer is : " << ans << endl;

  return 0;
}