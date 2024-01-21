/*
    Adrian Popescu
    problem link: https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/

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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* current = head->next;
        ListNode* prev = head;
        while(current != nullptr) {
            int a = prev->val, b = current->val;
            while(a != b) {
                if (a > b)
                    a -= b;
                else b -= a;
            }
            ListNode* toAdd = new ListNode(a, current);
            prev->next = toAdd;
            prev = current;
            current = current->next;
        }
        return head;
    }
};

int main() {

    return 0;
}