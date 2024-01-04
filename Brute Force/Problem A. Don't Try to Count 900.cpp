// problem link: https://codeforces.com/contest/1881/problem/A
// Brute force, if the lenght of the first string is smaller than the second automatically its not inside it
// so lets append it until it has the same lenght, if it's still not inside it, then try one more time

#include <iostream>
using namespace std;

int main() {
    int t, n, m, cnt = 0;
    cin >> t;
    string a, b;
    while (t--) {
        cin >> n >> m >> a >> b;
        cnt = 0;
        while(n < m) {
            a.append(a);
            n += n;
            cnt++;
        }
        if (a.find(b) != string::npos) {
            cout << cnt;
        }   else {
            a.append(a);
            n += n;
            cnt++;
            if (a.find(b) != string::npos) 
                cout << cnt;
            else cout << -1;
        }
        cout << '\n';
    }

    return 0;
}
