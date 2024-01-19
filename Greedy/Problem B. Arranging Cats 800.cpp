/*
problem link: https://codeforces.com/contest/1921/problem/B
    Counting the number of ones from both strings, than from all the differences, I decrese the minimum of ones 
    that will make pair with other ones to be more efficient
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int o1 = 0, o2 = 0;
        for (int i = 0; i < n; ++i) {
            if (s1[i] != s2[i]) {
                if (s1[i] == '1')
                    o1++;
                else o2++;
            }
        }
        cout << o1 + o2 - min(o1, o2) << "\n";
    }   
    

    return 0;
}
