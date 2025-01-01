#include<bits/stdc++.h>
using namespace std;
int main(){
    int graph[4][4];
    for(int i = 0; i < 4; i++){
        cout << "Insert value for ";
        if(i == 0) cout << "R to ";
        else if(i == 1) cout << "S to ";
        else if(i == 2) cout << "T to ";
        else cout << "U to ";
        cout << endl; 
        for(int j = 0; j < 4; j++){
            if(j == 0) cout << "R: ";
            else if(j == 1) cout << "S: ";
            else if(j == 2) cout << "T: ";
            else cout << "U: "; 
            cin >> graph[i][j];
        }
        cout << endl;
    }
    cout << "The graph is: " << endl;
    cout << " R " << "S " << "T " << "U " << endl;
    for(int i = 0; i < 4; i++){
        if(i == 0) cout << "R ";
        else if (i == 1) cout << "S ";
        else if(i == 2) cout << "T ";
        else cout << "U ";
        for(int j = 0; j < 4; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Add a node V : " << endl;
    int gp[5][5];
    int mxi, mxj;
    int mx = 0;
    for(int i = 0; i < 5; i++){
    	cout << "Insert value for ";
        if(i == 0) cout << "R to ";
        else if(i == 1) cout << "S to ";
        else if(i == 2) cout << "T to ";
        else if(i == 3) cout << "U to ";
        else cout << "V to ";
        cout << endl;
    	for(int j = 0; j < 5; j++){
            if(j == 0) cout << "R: ";
            else if(j == 1) cout << "S: ";
            else if(j == 2) cout << "T: ";
            else if(j == 3) cout << "U: ";
            else cout << "V: ";
            cin >> gp[i][j];
            if(i == 4){
                if(gp[i][j] > mx){
                    mx = gp[i][j];
                    mxi = i;
                    mxj = j;
                }
            }
    	}
    }
    cout << "Now the graph is: " << endl;
    cout << " R " << "S " << "T " << "U " << "V " << endl;
    for(int i = 0; i < 4; i++){
        if(i == 0) cout << "R ";
        else if (i == 1) cout << "S ";
        else if(i == 2) cout << "T ";
        else if(i == 3) cout << "U ";
        else cout << "V ";
        for(int j = 0; j < 4; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Max edge is: " << mx << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == mxi && j == mxj){
                gp[i][j] = 0;
            }
        }
    }
    cout << "After deleting max edge, Now the graph is: " << endl;
    cout << " R " << "S " << "T " << "U " << "V " << endl;
    for(int i = 0; i < 5; i++){
        if(i == 0) cout << "R ";
        else if (i == 1) cout << "S ";
        else if(i == 2) cout << "T ";
        else if(i == 3) cout << "U ";
        else cout << "V ";
        for(int j = 0; j < 5; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}