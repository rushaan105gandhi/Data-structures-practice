/*
    Middle of the linked List: Brute force method

    Approach:
        1. appoint temp at head.
        2. traverse through the list, and keep  counting nodes till we reach end.
        3. Middle Node is (count+1)/2 always.
        4. keep temp at head again.
        5. reduce mid by one each time you traverse through each node via temp
        6. point where mid is 0, return temp
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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            temp = temp -> next;
            count++;
        }
        int mid = (count/2) + 1;
        temp = head;

        while (temp != NULL) {
            mid = mid - 1;
            if (mid == 0) {
                break;
            }
            temp = temp -> next;
        }
        return temp;
    }
};