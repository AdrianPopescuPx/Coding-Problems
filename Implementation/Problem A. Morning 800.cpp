// problem link:
// Calculate the distances, be careful about when its 0 with 0

#include <algorithm>
#include <iostream>
using namespace std;
using ll = long long;
int main() {
    int t, n, x, ant = 1, sum;
    cin >> t;

    while (t--) {
        sum = 0;
        string s;
        cin >> s;
        ant = 1;
        for (int i = 0; i <= 3; ++i) {
            if (s[i] == '0') {
                if (ant == 0)
                    sum++;
                else
                    sum += 10 - ant + 1;
            } else {
                if (ant == 0)
                    sum += 10 - (s[i] - '0') + 1;
                else
                    sum += abs(s[i] - '0' - ant) + 1;
            }
            ant = s[i] - '0';
        }
        cout << sum;
        cout << '\n';
    }

    return 0;
}
