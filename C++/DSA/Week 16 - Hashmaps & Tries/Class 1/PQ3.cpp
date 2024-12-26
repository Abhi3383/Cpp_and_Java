#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool checkCircular(Node* head) {
    unordered_map<Node*, bool> vis;
    Node* temp = head;

    while (temp != NULL) {
        if (vis.find(temp) != vis.end()) {
            vis[temp] = true;
        } else {
            return true; // The linked list is circular
        }
        temp = temp->next;
    }

    return false; // The linked list is not circular
}

int main() {
    // Create a linked list (you should create your own linked list)
    Node* head = new Node;
    head->data = 1;
    head->next = new Node;
    head->next->data = 2;
    head->next->next = new Node;
    head->next->next->data = 3;
    head->next->next->next = head; // Make it circular

    if (checkCircular(head)) {
        cout << "The linked list is circular." << endl;
    } else {
        cout << "The linked list is not circular." << endl;
    }

    return 0;
}
