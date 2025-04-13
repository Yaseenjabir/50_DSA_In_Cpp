#include <iostream>

using namespace std;

void reverseArray(int arr[], int size)
{

  int start = 0;
  int end = size - 1;

  while (start <= end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main()
{

  int arr1[5] = {
      1,
      2,
      3,
      4,
      5,
  };
  int arr2[6] = {6, 7, 8, 9, 10, 11};

  reverseArray(arr1, 5);
  for (int i = 0; i < 5; i++)
  {
    cout << arr1[i] << " ";
  }

  return 0;
}