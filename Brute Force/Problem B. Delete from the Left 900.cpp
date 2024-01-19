#include <cmath>
#include <fstream>
#include <iostream>

// actually the best approach is to count the number of good pairs from right to left, and from the full number of letters to decrese the good pairs

using namespace std;
int main() {
    int t, n;
    string s1, s2;
    cin >> s1 >> s2;
    int count = 0, size = 0;
    int i = s1.size() - 1, j = s2.size() - 1;
    size = i + j + 2;
    while(i >= 0 && j >= 0 && s1[i] == s2[j]) {
        i--;
        j--;
        count++;
    }
    cout << size - count * 2;
    return 0;
}
