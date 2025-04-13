#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution
{
public:
  bool uniqueOccurrences(vector<int> &arr) // & here means we are directly passing the vector, any changes made here will directly reflect the original array
  {
    unordered_map<int, int> freqMap;
    for (int num : arr)
    {
      freqMap[num]++;
    }

    unordered_set<int> freqSet;
    for (const auto &pair : freqMap)
    {
      if (freqSet.find(pair.second) != freqSet.end()) // “If the frequency already exists in the set (i.e., .find() does NOT return .end()), then we have a duplicate frequency, so return false.”
      {
        return false;
      }
      freqSet.insert(pair.second);
    }
    for (const auto &val : freqSet)
    {
      cout << val << " " << endl;
    }

    return true;
  }
};

int main()
{
  vector<int> arr = {1, 2, 2, 1, 1, 3};
  Solution s1;
  bool ans = s1.uniqueOccurrences(arr);
  cout << endl;
  cout << ans << endl;

  return 0;
}