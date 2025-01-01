#include<bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  int c = 0;
  while (t--) {
    long long n, p;
    cin >> n >> p;
    if(floor(n / 2) >= 1) cout << "Case " << ++c << ": " "Oddius" << '\n';
    else{
      if(p == 1){
        cout << "Case " << ++c << ": " "Evenius" << '\n';
      } else {
        cout << "Case " << ++c << ": " "Oddius" << '\n';
      }
    }
  }
  return 0;
}