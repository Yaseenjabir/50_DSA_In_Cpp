#include <iostream>
#include <math.h>
using namespace std;

int main()
{

  int n = 5;
  int i = 0, ans = 0;
  while (n != 0)
  {
    int bit = n & 1;
    cout << "Bit is : " << bit << endl;

    cout << "ans before : " << ans << endl;
    ans = (bit * pow(10, i)) + ans;
    cout << "ans after : " << ans << endl;

    cout << "n before : " << n << endl;

    n = n >> 1;
    cout << "n after : " << n << endl;

    i++;
  }

  // cout << "Answer is : " << ans << endl;

  return 0;
}