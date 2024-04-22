/*
    Reversing a Linked List
*/
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* temp = head;

        while (temp != NULL) {
            ListNode* front = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
};