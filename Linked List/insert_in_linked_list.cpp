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
};

//insert at head

void insertAtHead(Node* &head, int data) {
    Node* tempNode = new Node(data);
    tempNode -> next = head;
    head = tempNode;
}

//insert at tail

void insertAtTail(Node* &tail, int data) {
    Node* tempNode = new Node(data);
    tail -> next = tempNode;
    tail = tempNode; 
}

//insert at  a specific position

void insertAtPosition(Node* &head, Node* &tail, int position, int data) {
    int count = 1;
    Node* temp = head;
    while (count < position-1) {
        if (temp == NULL) return ;
        temp = temp -> next;
        count++;
    }

    Node* newNode = new Node(data);
    newNode -> next = temp -> next;
    temp -> next = newNode;

    if (position == 1) {
        insertAtHead(head, data);
        return;
    }

    if (temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }
}

void print(Node* &head) {

    Node* temp = head;
    while(temp != NULL) {
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {

    Node* newNode = new Node(10);
    Node* head = newNode;
    Node* tail = newNode;

    insertAtHead(head, 5);
    insertAtHead(head, 2);

    insertAtTail(tail, 7);
    insertAtTail(tail, 8);

    insertAtPosition(head, tail, 4, 19);

    print(head);

    return 0;
}