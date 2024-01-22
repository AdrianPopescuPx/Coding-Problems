/*
    Adrian Popescu
    problem link: https://leetcode.com/problems/lexicographically-smallest-palindrome/description/

*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            // made them be the same character, but the smalles one lexicographically
            if (s[left] != s[right]) {
                if (s[left] < s[right])
                    s[right] = s[left];
                else s[left] = s[right];
            }
            left++;
            right--;
        }
        return s;
    }
};

int main() {
    return 0;
}