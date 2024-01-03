// Problem link: https://codeforces.com/problemset/problem/205/A
// do the frequency of the time to the towns and if the frq of the minimum is 1, then output its index
#include <cmath>
#include <fstream>
#include <iostream>
#include <map>
using namespace std;

int main() {
    
    int n, x, pos = 0, min = INT_MAX;
    cin >> n;
    map<int, int> map;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        if (min > x)
            min = x, pos = i;
        map[x]++;
    }
    if (map[min] == 1) {
        cout << pos;
    }   else {
        cout << "Still Rozdil";
    }

    return 0;
}
