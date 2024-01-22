/*
    Adrian Popescu
    problem link: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/

*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans = "";
        bool ok;
        for (auto word : words) {
            int left = 0, right = word.size() - 1;
            ok = true;
            while(left < right) {
                if (word[left] != word[right]) {
                    ok = false;
                    break;
                }
                left++;
                right--;
            }
            if (ok) {
                ans = word;
                break;
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}