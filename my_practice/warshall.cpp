#include<bits/stdc++.h>
using namespace std;
void warshall(int m){
    int a[m][m];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 0) a[i][j] = 99999;
        }
    }
    for(int k = 0; k < m; k++){
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int m;
    cin >> m;
    warshall(m);
}