#include<bits/stdc++.h>
using namespace std;
int main() {
    string T = {"abaababab"};
    string P = {"ab"};
    for(int i = 0; i <= T.size() - P.size() + 1; i++) {
        int c = 0;
        int temp = i;
        for(int j = 0; j < P.size(); j++) {
            if(T[i+j] == P[j])
            c++;
            // cout << T[temp];
            temp++;
        }
        // cout << c << endl;
        if(c == P.size())
        cout << i << " ";
    }
}