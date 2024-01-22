/*
    Adrian Popescu
    problem link: https://leetcode.com/problems/reverse-prefix-of-word/

*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos = word.find_first_of(ch);
        int left = 0;
        while(left < pos) {
            swap(word[left], word[pos]);
            left++;
            pos--;
        }
        return word;
    }
};

int main() {
    return 0;
}