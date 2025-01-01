#include<bits/stdc++.h>
using namespace std;
struct Node{
    string data;
    Node* next;
    Node(string val) : data(val), next(NULL){}
};
Node* head = NULL;
void insert(string val){
    Node* newnode = new Node(val);
    Node* temp = head;
    if(!head){
        head = newnode;
        return;
    } else{
        while(temp->next){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode = head;
    }
}
void display(){
    for(Node* i = head; i; i = i->next) cout << i->data << " ";-+
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        insert(x);
    }
    display();
}