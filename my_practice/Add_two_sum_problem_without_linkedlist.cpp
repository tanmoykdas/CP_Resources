#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        string result = "";
        int carry = 0;
        int l = min(s1.size(), s2.size());
        // cout << "l: " << l << endl;
        for (int i = 0; i < l; i++) {
            int sum = (s1[s1.size() - 1 - i] - '0') + (s2[s2.size() - 1 - i] - '0');
            // cout << sum << " " << i << endl;
            if (carry > 0) {
                sum += carry;
                carry = 0;
            }

            if (sum >= 10) {
                int val = sum % 10;
                sum /= 10;
                carry = sum;
                result += to_string(val);
            } else {
                result += to_string(sum);
            }

        }

        if (carry) result += to_string(carry);

        reverse(result.begin(), result.end());
        cout << result << endl;

    }
    return 0;
}