// Problem link: https://codeforces.com/contest/1881/problem/B

// brute force, since there are maximum 3 possible cuts, I will make all of them, work even for big tests

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;

    while (t--) {
        int vec[3], cnt = 0;
        cin >> vec[0] >> vec[1] >> vec[2];
        sort(vec, vec + 3);

        while (vec[1] > vec[0] && cnt != 3) {
            cnt++;
            vec[1] = vec[1] - vec[0];
        }
        while (vec[2] > vec[1] && cnt != 3) {
            cnt++;
            vec[2] = vec[2] - vec[1];
            if (cnt == 3)
                break;
        }
        if (cnt > 3 || vec[0] != vec[1] || vec[1] != vec[2]) {
            cout << "NO";
        } else
            cout << "YES";
        cout << '\n';
    }

    return 0;
}
