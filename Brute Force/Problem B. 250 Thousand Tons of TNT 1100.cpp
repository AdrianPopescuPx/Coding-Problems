// problem link:   https://codeforces.com/contest/1899/problem/B
// We can be sure that all possible boxes pairs will be all the numbers that divide n, so I made all possible moves inside the trucks


#include <algorithm>
#include <iostream>
using namespace std;
using ll = long long;
int main() {
    int t, n, x; 
    cin >> t;

    while (t--) {
        cin >> n;
        ll cnt = 0, maxim = LONG_LONG_MIN, minim = LONG_LONG_MAX, sum = 0;
        ll vec[n + 1], ans = 0;
        
        for (int i = 1; i <= n; ++i) {
            cin >> vec[i];
        }
        for (int d = 1; d < n; ++d) {
            if (n % d == 0) {
                cnt = 0;
                sum = 0;
                maxim = LONG_LONG_MIN, minim = LONG_LONG_MAX;
                for (int i = 1; i <= n; ++i) {
                    cnt++;
                    sum += vec[i];
                    if (cnt == d) {
                        maxim = max(maxim, sum);
                        minim = min(minim, sum);
                        cnt = 0, sum = 0;
                    }
                }
                ans = max(ans, maxim - minim);
            }
        }
        cout << ans;
        cout << '\n';
    }

    return 0;
}
