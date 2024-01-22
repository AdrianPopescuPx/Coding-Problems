/*
    Adrian Popescu
    problem link: https://leetcode.com/problems/di-string-match/description/
    Beats 100% of users
*/
#include <bits/stdc++.h>
using namespace std;
// it always works since we can use the numbers from 0 to the size of the string
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int left = 0, size = s.size();
        int right = size;
        vector<int> ans;
        for (int i = 0; i < size; i++) {
            if (s[i] == 'I')
                ans.push_back(left++);
            else ans.push_back(right--);
        }
        if (s[size-1] == 'I')
                ans.push_back(left++);
            else ans.push_back(right--);
        return ans;
    }
};

int main() {
    return 0;
}