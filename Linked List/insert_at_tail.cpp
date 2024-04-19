#include <bits/stdc++.h>
using namespace std;

// insert at tail

class Node {

    public:
        int data;
        Node* next;

        //Constructor
        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
};

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head){
    Node *temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

//Driver code

int main() {

    //creating a new Node
    Node* node1 = new Node(10); // [10, NULL]

    //head pointing to node1       Head---->[10, NULL]  <--- Next
    Node* head = node1;

    //tail and head both are pointing to node1      Tail, Head ---> [10, NULL]  <--- Next
    Node* tail = node1;
    print(head);

    //inserting at tail
    insertAtTail(tail, 12);         // [10, next] -> [12, NULL]
    print(head);

    insertAtTail(tail, 15);        // [10,  next] -> [12, next] -> [15, NULL]
    print(head);

    return 0;
}