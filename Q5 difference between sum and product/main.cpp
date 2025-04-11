#include <iostream>

using namespace std;

int main()
{

  int n = 234;

  int product = 1;
  int sum = 0;

  int ans;

  while (n != 0)
  {
    cout << "n before: " << n << endl;
    int lastDigit = n % 10;
    product *= lastDigit;
    sum += lastDigit;
    n /= 10;
    cout << "lastDigit : " << lastDigit << endl;
    cout << "product : " << product << endl;
    cout << "sum : " << sum << endl;
    cout << "n after: " << n << endl
         << endl;
  }

  ans = (product - sum);

  // cout << ans << endl;

  return 0;
}