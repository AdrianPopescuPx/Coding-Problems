
/*
    Adrian Popescu
    problem link: https://codeforces.com/problemset/problem/456/A
*/
#include <iostream>
int n, x, y, a;
bool z = 0;
int main() {
    std::cin >> n;
    for (a = 0; a < n; a++) {
        std::cin >> x >> y;
        if (x != y)
            z = 1;
    }
    std::cout << (z ? "Happy Alex" : "Poor Alex");
}