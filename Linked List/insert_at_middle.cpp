#include <bits/stdc++.h>
using namespace std;

//This code describes how to insert a Node at a Position.
/*
traverse through the linked list to reach the position where you want to insert the node.
make a new node for the data you want to insert
nodeToInsert -> next = temp -> next
temp -> next = nodeToInsert;
*/

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

void insertAtPosition (Node* &head, int position, int  data) {
    
    Node* temp = head;
    int cnt = 1;

    //traverse through the list to get to that position
    while (cnt < position-1) {
        temp = temp -> next;
        cnt++;
    }

    //create a node for data
    Node *nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void print (Node * &head) {
    Node* temp = head;
    
    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {

    Node* node1 = new Node(10);
    Node* node2 = new Node(12);
    Node* node3 = new Node(15);
    node1 -> next = node2;
    node2 -> next = node3;
    cout << "Original List: \n";
    print(node1);

    insertAtPosition(node1, 2, 8);
    print(node1);

    return 0;
}