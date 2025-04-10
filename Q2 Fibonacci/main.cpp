#include <iostream>

using namespace std;

int main()
{

  int a = 0;
  int b = 1;

  int n = 10;

  cout << a << " " << b << " ";

  for (int i = 1; i <= n; i++)
  {
    int nextNumber = a + b;
    a = b;
    b = nextNumber;
    cout << nextNumber << " ";
  }

  return 0;
}