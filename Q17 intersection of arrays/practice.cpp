#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

unordered_set<int> intersection(vector<int> &arr1, vector<int> &arr2)
{
  unordered_set<int> mySet = {arr1.begin(), arr1.end()};
  unordered_set<int> result;

  for (const auto &num : arr2)
  {
    if (mySet.count(num))
    {
      result.insert(num);
    }
  }

  return result;
}

int main()
{

  vector<int> nums1 = {4, 9, 5};
  vector<int> nums2 = {4, 3, 4, 6, 7, 9, 0};

  unordered_set<int> result = intersection(nums1, nums2);
  for (const auto &num : result)
  {
    cout << num << " ";
  }

  return 0;
}