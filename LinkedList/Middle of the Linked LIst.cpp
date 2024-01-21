/*
    Adrian Popescu
    problem link: https://leetcode.com/problems/middle-of-the-linked-list/description/

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
        ListNode *temp = head;
        int count = 0, id = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        count = count / 2 + 1;

        temp = head;
        while (temp != nullptr) {
            id++;
            if (id == count) {
                return temp;
            }
            temp = temp->next;
        }
        return head;
    }
};

int main() {

    return 0;
}