#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// vector<int>
void intersection(vector<int> &nums1, vector<int> &nums2)
{
  unordered_set<int> set1(nums1.begin(), nums1.end());
  unordered_set<int> result;

  for (const auto &num : nums2)
  {
    if (set1.count(num))
    {
      result.insert(num);
    }
  }
}

int main()
{

  vector<int> nums1 = {4, 9, 5};
  vector<int> nums2 = {9, 4, 9, 8, 4};

  // vector<int> res = intersection(nums1, nums2);
  intersection(nums1, nums2);

  return 0;
}