/*
    https://www.naukri.com/code360/problems/introduction-to-linked-list_8144737?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
*/

#include <bits/stdc++.h>
using namespace std;

class Node {

    public:
        int data;
        Node* next;

        Node(int data) {
            this -> data = data;
            this -> next = nullptr;
        }
};

Node* constructLL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* current = head;

    for (int i = 1; i< arr.size(); i++) {
        current -> next = new Node(arr[i]);
        current = current -> next;
    }
    return head;
}

void printList(Node *head) {
    Node* temp = head;
    while(temp!= NULL) {
        cout << temp -> data << " ";
        temp = temp ->next;
    }
}

int main() {
    vector<int> arr = {2,4,6,8};
    Node *head = constructLL(arr);
    
    cout << "Linked List is : ";
    printList(head);

    return 0;
}