#include<bits/stdc++.h>
using namespace std;
void BFS(vector<vector<int>>& v, int low){
    queue<int> q;
    vector<bool> visit(v.size(), false);
    q.push(low);
    visit[low] = true;
    while(!q.empty()){
        int temp = q.front();
        cout << temp << " ";
        q.pop();
        for(auto x : v[temp]){
            if(!visit[x]){
                q.push(x);
                visit[x] = true;
            }
        }
    }
}
int main(){
    int n, e;
    cin >> n >> e;
    vector<vector<int>> v(n);
    for(int i = 0 ; i < e; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    BFS(v, 0);
}