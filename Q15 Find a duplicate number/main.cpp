#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &arr)
{
  int ans = 0;

  // Step 1: XOR all elements in the array
  for (int i = 0; i < arr.size(); i++)
  {
    ans ^= arr[i];
  }

  cout << "Ans is :" << ans << endl;

  // Step 2: XOR with numbers from 1 to n-1
  for (int i = 1; i < arr.size(); i++)
  {

    ans ^= i;
  }

  // The result is the duplicate number
  return ans;
}

int main()
{

  vector<int> arr = {1, 3, 4, 2, 2};

  int ans = findDuplicate(arr);
  cout << ans << endl;

  return 0;
}