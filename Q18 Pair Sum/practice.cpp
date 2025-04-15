#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pair_sum(vector<int> &arr, int target)
{
  vector<vector<int>> ans;
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = i + 1; j < arr.size(); j++)
    {
      if (arr[i] + arr[j] == target)
      {
        vector<int> tempVec;
        tempVec.push_back(min(arr[i], arr[j]));
        tempVec.push_back(max(arr[i], arr[j]));
        ans.push_back(tempVec);
      }
    }
  }
  return ans;
}

int main()
{

  // vector<int> arr = {1, 2, 3, 4, 5};
  vector<int> arr = {4, 1, 2, 4, 6};

  int target = 8;

  vector<vector<int>> ans = pair_sum(arr, target);

  for (const auto &pair : ans)
  {
    cout << "[" << pair[0] << "," << pair[1] << "]" << endl;
  }

  return 0;
}