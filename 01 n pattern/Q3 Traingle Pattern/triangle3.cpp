#include <iostream>

using namespace std;

int main()
{

  int n;
  cin >> n;

  int count = 1;

  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= row; col++)
    {
      cout << count;
      count++;
    }
    cout << endl;
    count--;
  }

  return 0;
}

/*
Input : 5

Output :
1
12
234
4567
7891011

*/