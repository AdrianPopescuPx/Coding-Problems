// problem link: https://codeforces.com/problemset/problem/1896/B


// Two pointers for each secvence starting with A and ending with B I'm adding the posibilties of swaping pairs

#include <bits/stdc++.h>
using namespace std;
char s[200005];
int main() {
    int t;
    cin >> t;
    int n;
    while (t--) {
        int ans = 0;
        cin >> n;
        for (int i = 1; i <= n; ++i) cin >> s[i];
        s[n + 1] = 'C';
        int p1 = 1, p2 = 1;
        while (p2 < n && s[p2] == 'B') {
            p1++, p2++;
        }
        int cntA = 0, cntB = 0;
        while (p1 < n) {
            while (s[p2] == 'A') ++p2, ++cntA;
            while (s[p2] == 'B') ++p2, ++cntB;
            if (s[p2 - 1] == 'B')
                ans += p2 - p1 - 1;
            if (cntB) {
                p1 = p2 - 1;
            } else
                break;
        }
        cout << ans << '\n';
    }

    return 0;
}
