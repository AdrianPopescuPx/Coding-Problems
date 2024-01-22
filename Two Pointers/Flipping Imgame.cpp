/*
    Adrian Popescu
    problem link: https://leetcode.com/problems/flipping-an-image/description/

*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size() - 1;
        for (int i = 0 ; i <= n; ++i) {
            int left = 0, right = n;
            while(left < right) {
                swap(image[i][left], image[i][right]);
                left++;
                right--;
            }
        }
        for (int i = 0 ; i <= n; ++i) {
            for (int j = 0; j <= n; ++j) {
                if (image[i][j] == 0)
                    image[i][j] = 1;
                else image[i][j] = 0;
            }
        }
        return image;
    }
};

int main() {
    return 0;
}