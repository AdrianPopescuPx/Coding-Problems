#include <cmath>
#include <iostream>
using namespace std;
// I've saved the sum of max and min and when finding one new,
// adding that sum to the final sum, smart approach.
// Great problem, since we cannot use any collection to store the numbers
int main() {
    long long n, x, sumaMx = 0, sumaMn = 0, sumaFin = 0;
    cin >> n;
    int max, min;
    sumaMx = 0;
    sumaMn = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x == max) {
            sumaMx += x;
        } else if (x == min) {
            sumaMn += x;
        } else if (x > max) {
            max = x;
            sumaFin += sumaMx;
            sumaMx = x;
        } else if (x < min) {
            min = x;
            sumaFin += sumaMn;
            sumaMn = x;
        } else {
            sumaFin += x;
        }
    }

    cout << sumaFin;

    return 0;
}
