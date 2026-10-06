#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insert(int val) {
    Node* new_node = new Node{val, nullptr};

    if (head == nullptr) {
        head = new_node;

    } else {
        Node* current = head;
        while(current -> next != nullptr) {
            current = current->next;
        }
        current->next = new_node;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    for (int i = 1; i <= 5; ++i) {
        insert(i);
    }

    for (Node* current = head; current !=nullptr; current = current->next) {
        cout << current->data << " ";
    }

    
    return 0;
}