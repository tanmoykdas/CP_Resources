#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a = 5, b = 6;
  cout << a << " " << b << endl;
  a = a ^ b;
  b = b ^ a;
  a = a ^ b;
  cout << a << " " << b;
  cout << endl;
  // determine a odd count number that is present in the array

  int arr[7] = {1, 2, 3, 2, 3, 5, 5}; // that will ans 1
  int ans = 0;
  for (int i = 0; i < 7; i++) {
  	ans ^= arr[i];
  }
  cout << ans;
  return 0;
}