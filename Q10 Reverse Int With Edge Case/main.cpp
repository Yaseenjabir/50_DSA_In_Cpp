#include <iostream>
#include <climits> // Required for INT_MAX and INT_MIN
using namespace std;

int main()
{

  int num = 123;
  int ans = 0;
  while (num != 0)
  {
    int lastDigit = num % 10;
    if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
    {
      return 0;
    }
    ans = (ans * 10) + lastDigit;
    num /= 10;
  }

  cout << ans << endl;

  return 0;
}