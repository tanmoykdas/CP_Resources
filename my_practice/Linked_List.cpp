#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    struct Node {
        int data;
        Node* next;
    };

    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    for (Node* current = head; current != nullptr; current = current->next) {
        std::cout << current->data << " ";
    }

    return 0;
}