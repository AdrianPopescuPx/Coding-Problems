#include <bits/stdc++.h>
using namespace std;

/*
There are at most 8 positions of the knight that can attack a single cell. Therefore I have found all using brute force
*/

int main() {
    int t;
    cin >> t;
    int k1, k2, q1, q2, x, y;
    while (t--) {
        cin >> x >> y >> k1 >> k2 >> q1 >> q2;
        set<pair<int, int>> st1, st2;
        // down
        st1.insert({k1 + x, k2 + y});
        st1.insert({k1 + x, k2 - y});
        // up
        st1.insert({k1 - x, k2 + y});
        st1.insert({k1 - x, k2 - y});
        // right
        st1.insert({k1 + y, k2 + x});
        st1.insert({k1 - y, k2 + x});
        // left
        st1.insert({k1 + y, k2 - x});
        st1.insert({k1 - y, k2 - x});

        // down
        st2.insert({q1 + x, q2 + y});
        st2.insert({q1 + x, q2 - y});
        // up
        st2.insert({q1 - x, q2 + y});
        st2.insert({q1 - x, q2 - y});
        // right
        st2.insert({q1 + y, q2 - x});
        st2.insert({q1 - y, q2 - x});
        // left
        st2.insert({q1 + y, q2 + x});
        st2.insert({q1 - y, q2 + x});
        int ans = 0;
        for (auto x : st1)
            if (st2.find(x) != st2.end())
                ans++;
        cout << ans << '\n';
    }

    return 0;
}
