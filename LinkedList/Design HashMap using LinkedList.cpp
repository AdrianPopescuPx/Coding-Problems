/*
    Adrian Popescu
    problem link: https://leetcode.com/problems/design-hashmap/description/

*/
#include <bits/stdc++.h>
using namespace std;

class MyHashMap {
private:
    struct LinkedNode {
        int key;
        int value;
        LinkedNode* next;
        LinkedNode(int k, int v) : key(k), value(v), next(nullptr) {}
    };
    LinkedNode *head;

public:
    MyHashMap() {
        head = nullptr;
    }

    void put(int key, int value) {
        LinkedNode *current = head;
        LinkedNode *prev = nullptr;

        while (current != nullptr) {
            if (current->key == key) {
                current->value = value;
                return;
            }
            prev = current;
            current = current->next;
        }

        // If the key is not found, add a new node at the end
        LinkedNode *newNode = new LinkedNode(key, value);
        if (prev == nullptr) {
            // If the list is empty, set the new node as the head
            head = newNode;
        } else {
            // Otherwise, add the new node after the last node
            prev->next = newNode;
        }
    }

    int get(int key) {
        LinkedNode *current = head;
        while (current != nullptr) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
        return -1;
    }

    void remove(int key) {
        LinkedNode *current = head;
        LinkedNode *prev = nullptr;
        
        if (current != nullptr && current->key == key) {
            head = head->next;
            delete current;
            return;
        }

        while (current != nullptr) {
            if (current->key == key) {
                prev->next = current->next;
                delete current;
                return;  // Break out of the method after deleting the node
            }
            prev = current;
            current = current->next;
        }
    }
};


int main() {
    return 0;
}