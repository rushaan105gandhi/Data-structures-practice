#include <bits/stdc++.h>
using namespace std;

//INSERT AT HEAD

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

void insertAtHead(Node* &head, int d) {
    
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head) {
    Node* temp = head;

    while (temp!=NULL) {
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {

    //creating a new Node
    Node* node1 = new Node(10);

    //head pointing to node 1
    Node* head = node1;
    print(head);

    //inserting at the beginning
    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);

    return 0;
}