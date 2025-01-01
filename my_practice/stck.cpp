#include<bits/stdc++.h>
using namespace std;
string postfix(string s){
    stack<char> stk;
    stk.push('(');
    s.push_back(')');
    string p;
    // cout << s;
    for(int i = 0; i < s.size(); i++){
        // cout << s[i];
        if(s[i] == ' ')
            p.push_back(' ');
        else{
            if(s[i] >= 48 && s[i] <= 57){
                p.push_back(s[i]);
                while(s[i + 1] >= 48 && s[i + 1] <= 57){
                    p.push_back(s[i + 1]);
                    i++;
                }
            }
            else if(s[i] == '('){
                stk.push(s[i]);
            }
            else if(s[i] == ')'){
                while(stk.top() != '('){
                    p.push_back(stk.top());
                    stk.pop();
                }
                stk.pop();
            }
            else{
                if(stk.top() == '(' || s[i] == '^')
                stk.push(s[i]);
                else if(s[i] == '+' || s[i] == '-'){
                    p.push_back(stk.top());
                    stk.pop();
                    stk.push(s[i]);
                }
                else{
                    if(stk.top() == '+' || stk.top() == '-')
                    stk.push(s[i]);
                    else if(stk.top() == '^' || stk.top() == '*' || stk.top() == '/'){
                        p.push_back(stk.top());
                        stk.pop();
                        stk.push(s[i]);
                    }
                }
            }
        }
    }
    return p;
}
void value(string p){
    stack<int> stk;
    for(int i = 0; i < p.size(); i++){
        
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    string p = postfix(s);
    cout << p;
    value(p);
    return 0;
}