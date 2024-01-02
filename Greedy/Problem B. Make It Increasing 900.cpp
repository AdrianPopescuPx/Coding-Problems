#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;
// problem link: https://codeforces.com/problemset/problem/1675/B
// interesting problem, I had to traverse it from right to left and when a number is smaller or equal then the one before him
// I keep dividing it by 2 until it becomes 0 or smaller the him, after doing this dividing, if its still smallor or equal, than the answer is -1

int main() {
    int t, n;
    cin >> t;
    long long vec[31];
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cin >> vec[i];
        }
        int count = 0;
        for (int i = n; i > 1; --i) {
            while (vec[i] <= vec[i - 1]) {
                vec[i - 1] /= 2;
                count++;
                if (vec[i - 1] == 0)
                    break;
            }
            if (vec[i] <= vec[i - 1]) {
                count = -1;
                break;
            }
        }
        cout << count << '\n';
    }

    return 0;
}
