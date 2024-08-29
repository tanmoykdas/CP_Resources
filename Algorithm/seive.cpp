#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 1;
vector<int> prime(N, 1), hp(N, 0), lp(N, 0);
void seive() {
    prime[0] = prime[1] = 0;
    for (int i = 2; i < N; i++) {
        if (prime[i] == 1) {
            lp[i] = hp[i] = i;
            for (int j = i * 2; j < N; j += i) {
                prime[j] = 0;
                hp[j] = i;
                if (lp[j] == 0) lp[j] = i;
            }
        }
    }
    int n;
    cin >> n;
    vector<int> prime_factor;
    while(n > 1) {
        int p = lp[n];
        while(n % p == 0) {
            prime_factor.push_back(p);
            n /= p;
        }
    }
    for (auto fact : prime_factor) {
        cout << fact << " ";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    seive();
    return 0;
}