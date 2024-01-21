/*
    Adrian Popescu
    problem link: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/

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

// Knowing that the first half of the list has a twin in the oposite order inside the second half
// I split the list in 2 parts and traversed them simultaneously after reversing the second half

class Solution {
public:
    int pairSum(ListNode* head) {
        int size = 0, count = 0, ans = 0;
        ListNode *temp = head;
        while(temp != nullptr) {
            size++;
            temp = temp->next;
        }
        temp = head;
        ListNode *second = head;

        // Reverse the second part of the list
        while(count < size / 2) {
            second = second->next;
            count++;
        }
        ListNode *nextNode = nullptr;
        ListNode *prev = nullptr;
        while(second != nullptr) {
            nextNode = second->next;
            second->next = prev;
            prev = second;
            second = nextNode;
        }
        second = prev;
        count = 0;
        while(count != size / 2) {
            ans = max(temp->val + second->val, ans);
            second = second->next;
            count++;
            temp = temp->next;
        }
        return ans;
    }
};

int main() {

    return 0;
}