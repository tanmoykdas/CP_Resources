// n'th fibonacci number using dp.
#include<bits/stdc++.h>
using namespace std;
const int N = 10e5 + 10;
int dp[N];
int fib(int n) {
    if(n == 0 ) return 0;
    if(n == 1) return 1;
    if(dp[n] != -1) return dp[n];
    // memoise
    return dp[n] = fib(n - 1) + fib(n - 2);
    /*eida eksathe array tea store o kore abar return o korte pare*/            
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}