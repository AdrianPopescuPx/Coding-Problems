/*
    Adrian Popescu
    problem link: https://leetcode.com/problems/design-hashset/description/

*/
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class MyHashSet {
   private:
    struct LinkedNode {
        int val;
        LinkedNode* next;
        LinkedNode(int v) : val(v), next(nullptr) {}
    };
    LinkedNode* head = nullptr;
    LinkedNode* temp = head;

   public:
    MyHashSet() {
    }
    // add a key only if it doesnt exist
    void add(int key) {
        if (!contains(key)) {
            if (head == nullptr) {
                head = new LinkedNode(key);
                temp = head;
            } else {
                LinkedNode* next = new LinkedNode(key);
                temp->next = next;
                temp = temp->next;
            }
        } else {
            // If the key already exists, reset temp to the head
            temp = head;
            // Update temp to the current tail
            while (temp != nullptr && temp->next != nullptr) {
                temp = temp->next;
            }
        }
    }

    void remove(int key) {
        LinkedNode* current = head;
        LinkedNode* prev = nullptr;
        // Search for the key in the linked list
        while (current != nullptr && current->val != key) {
            prev = current;
            current = current->next;
        }

        // If the key is found, remove it from the linked list
        if (current != nullptr) {
            if (prev == nullptr) {
                // If the key is in the first node
                head = current->next;
            } else {
                prev->next = current->next;
            }
            delete current;
            temp = head;
            // Update temp to the current tail
            while (temp != nullptr && temp->next != nullptr) {
                temp = temp->next;
            }
        }
    }

    bool contains(int key) {
        LinkedNode* current = head;
        while (current != nullptr) {
            if (current->val == key) {
                return true;
            }
            current = current->next;
        }
        return false;
    }
};

int main() {
    return 0;
}