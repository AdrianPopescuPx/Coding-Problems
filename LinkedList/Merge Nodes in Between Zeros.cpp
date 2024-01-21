/*
    Adrian Popescu
    problem link: https://leetcode.com/problems/merge-nodes-in-between-zeros/description/
    Sum all nodes, when finding a 0, add to the new Head node
    carefully deleting the pointers so I don't have memory leaks
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp = head->next;
        ListNode *prev = nullptr;
        ListNode *pass = nullptr;
        ListNode *first = pass;
        delete head;
        int sum = 0;
        while(temp != nullptr) {
            sum += temp->val;
            if (temp->val == 0) {
                if (pass == nullptr) {
                    pass = new ListNode(sum);
                    first = pass;
                }   else {
                    pass->next = new ListNode(sum);
                    pass = pass->next;
                }
                sum = 0;
            }
            prev = temp;
            temp = temp->next;
            delete prev;
        }
        
        return first;
    }
};

int main() {

    return 0;
}