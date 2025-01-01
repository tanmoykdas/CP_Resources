#include<bits/stdc++.h>
using namespace std;
int k = 0;
void test_case() {
  k++;
  int N, K;
  cin >> N >> K;
  int ans = 0;
  for(int i = 0; i < N; i++){
    int xi, yi;
    cin >> xi >> yi;
    ans += (K / xi);
  }
  cout << "Case " << k << ": " << ans << endl;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    test_case();
  }
  return 0;
}
