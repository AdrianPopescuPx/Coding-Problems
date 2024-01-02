//problem link: https://codeforces.com/problemset/problem/1295/A
// Greedy, so if the number is odd, them display at the beginning a 7, than only ones
// if not, only ones, since 1 is the number that requires the lowest resources, then we display only ones

#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;


int main() {
    int t, n;
    cin >> t;
    long long vec[31];
    while (t--) {
        cin >> n;
        int sum = 0;
        if (n % 2) {
            cout << 7;
            n -= 3;
        }
        while(n) {
            cout << 1;
            n -= 2;
        }
        cout << '\n';
    }

    return 0;
}
