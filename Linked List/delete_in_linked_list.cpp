#include <bits/stdc++.h>
using namespace std;

class Node {
    
    public:
        int data;
        Node* next;
    
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node() {
        if (this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
    }
};

void deleteNode(int position, Node* &head) {
    
    //delete at head
    if (position == 1) {
        Node* temp = head;
        head = head -> next;
        temp -> next = nullptr;
        delete temp;
    }

    //delete in the middle
    else {
        Node* current = head;
        Node* previous = NULL;

        int count = 1;

        while(count < position) {
            previous = current;
            current = current -> next;
            count++;
        }

        previous -> next = current -> next;
        current -> next = nullptr;
        delete current;
    }
}

void printList(Node* &head) {
    Node* temp = head;
    
    while (temp != NULL) {
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}

//driver code
int main() {

    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);

    Node* head = node1;

    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = nullptr;

    printList(head);

    deleteNode(2, head);
    printList(head);

    return 0;
}