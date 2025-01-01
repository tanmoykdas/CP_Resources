#include<bits/stdc++.h>
using namespace std;
void DFS_recursive(vector<vector<int>>& v, vector<bool>& visit, int low){
    visit[low] = true;
    cout << low << " ";
    for(auto x : v[low]){
        if(!visit[x]){
            DFS_recursive(v, visit, x);
        }
    }
}
void DFS(vector<vector<int>>& v, int low){
    vector<bool> visit(v.size(), false);
    DFS_recursive(v, visit, low);
}
int main(){
    int n, e;
    cin >> n >> e;
    vector<vector<int>> v(n);
    for(int i = 0; i < e; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    DFS(v, 0);
}