#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v(1e7, 0);
    // counting digit
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    // for (auto x : a) cout << x << " ";
    // cout << endl;
    for (int i = 0; i < n; i++) {
    	v[a[i]]++;
    }
    int t;
    cin >> t;
    while (t--) {
    	int m;
    	cin >> m;
    	cout << v[m] << "\n";
    }
    return 0;
}
