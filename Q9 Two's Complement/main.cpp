#include <iostream>
#include <string>
#include <bitset>  // For binary representation
#include <climits> // For bit length checks
using namespace std;

string twos_complement(int num, int bits = 8)
{
  if (num >= 0)
  {
    cerr << "Error : Input must be negative. \n";
    return "";
  }

  int min_val = -(1 << (bits - 1));
  if (num < min_val)
  {
    cerr << "Error : Number out of range for " << bits << "-bit representation. \n";
    return "";
  }

  unsigned int abs_num = -num;
  bitset<32> binary(abs_num); // Convert to binary (max 32 bits)

  // Step 4: Keep only the required number of bits
  string binary_str = binary.to_string().substr(32 - bits);

  cout << "binary_str before : " << binary_str << endl;

  // Step 5: Invert all bits (One's Complement)
  for (char &bit : binary_str)
  {
    bit = (bit == '0') ? '1' : '0';
  }
  bool carry = true; // Start with a carry to add 1
  for (int i = bits - 1; i >= 0 && carry; --i)
  {
    if (binary_str[i] == '0')
    {
      binary_str[i] = '1'; // Flip 0 → 1 (no further carry)
      carry = false;       // Carry resolved
    }
    else
    {
      binary_str[i] = '0'; // Flip 1 → 0 (carry propagates)
    }
  }
  return binary_str;
}

int main()
{

  int n;
  cout << "Enter negative decimal number" << endl;
  cin >> n;

  int bits;
  cout << "Enter the number of bits : " << endl;
  cin >> bits;

  string result = twos_complement(n, bits);
  if (!result.empty())
  {
    cout << "Two's Complement (" << bits << "-bit): " << result << endl;
  }

  return 0;
}