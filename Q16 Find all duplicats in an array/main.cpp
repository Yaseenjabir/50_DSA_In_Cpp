#include <iostream>
#include <vector>
using namespace std;

void findAllDuplicates(vector<int> &arr)
{
  vector<int> duplicates;
  for (int i = 0; i < arr.size(); i++)
  {
    int index = abs(arr[i]) - 1;
    if (arr[index] > 0)
    {
      // First time seeing this number
      arr[index] = -arr[index]; // Mark it as seen
    }
    else
    {
      // Already negative? Seen before = duplicate!
      duplicates.push_back(abs(arr[i]));
    }
  }
  for (const auto &ele : duplicates)
  {
    cout << ele << " ";
  }
}

int main()
{

  vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
  findAllDuplicates(arr);

  return 0;
}