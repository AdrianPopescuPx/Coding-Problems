/*
    Adrian Popescu
    problem link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

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
    int getDecimalValue(ListNode *head) {
        int decimal = 0, power = 0;
        ListNode *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
            power++;
        }
        temp = head;
        while (temp != nullptr) {
            decimal = decimal + temp->val * pow(2, power);
            temp = temp->next;
            power--;
        }
        return decimal;
    }
};

int main() {

    return 0;
}