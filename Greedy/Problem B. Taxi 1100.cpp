/*
    Author: Adrian Popescu
    problem link: https://codeforces.com/problemset/problem/158/B
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, sum = 0;
    cin >> t;
    int frecv[5] = {0};
    while (t--) {
        cin >> n;
        frecv[n]++;
    }
    // add all 4s and all 3s, i use all ones to the 3s
    sum += frecv[4] + frecv[3];
    if (frecv[1] > 0)
        frecv[1] -= frecv[3];
    // add all pairs of twos
    sum += frecv[2] / 2;
    frecv[2] -= frecv[2] / 2 * 2;
    // check if there is one more 2 and also add ones to it
    if (frecv[2] == 1)
        sum++, frecv[1] -= 2;
    // if there are more ones, make pairs of four
    if (frecv[1] > 0) {
        if (frecv[1] % 4 == 0)
            sum += frecv[1] / 4;
        else sum += frecv[1] / 4 + 1;
    } 
    
    cout << sum;

    return 0;
}
