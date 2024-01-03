#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;
/*
it's all about the sum of all cookies
problem link: https://codeforces.com/problemset/problem/129/A
*/
int main() {
    
    int n, countOdd = 0, countEven = 0;
    int sum = 0, x;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        if (x % 2)
            countOdd++;
        else countEven++;
        sum += x;
    }
    if (sum % 2) {
        cout << countOdd;
    }   else {
        cout << countEven;
    }
    return 0;
}
