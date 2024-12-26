#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;
    cin >> m;
    sort(a, a + n);
    int left, right, mid;
    bool con = false;
    left = 0;
    right = n - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == m) {
            con = true;
            break;
        }
        if (a[mid] > m) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << con;
    return 0;
}