// problem link: https://codeforces.com/contest/1878/problem/A

// there always exists a subset if the number exists, it can be just a subset with the number by itself

#include <algorithm>
#include <iostream>
using namespace std;
using ll = long long;
int main() {
    int t, n, x, ant = 1, s;
    cin >> t;

    while (t--) {
        cin >> n >> x;
        bool ok = 0;
        for (int i = 1; i <= n; ++i) {
            cin >> s;
            if (s == x)
                ok = 1;
        }
        if (ok) {
            cout << "yes";
        }   else cout << "no";
        cout << '\n';
    }

    return 0;
}
