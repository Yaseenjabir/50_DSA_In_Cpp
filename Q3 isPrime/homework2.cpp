#include <iostream>

using namespace std;

int main()
{

  for (int i = 0; i <= 15; i += 2) // incrementing by 2
  {

    cout << i << " ";

    if (i & 1) // since we are incrementing by 2 so there is no effect of this if condition in loop, this if condition would be effective if we we incrementing by 1 (i++)
    {
      continue;
    }
  }

  return 0;
}