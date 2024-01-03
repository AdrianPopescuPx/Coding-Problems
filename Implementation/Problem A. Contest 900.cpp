#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    int vas, mis, a, b;
    cin >> mis >> vas >> a >> b;
    long long sum1 = max((3 * mis) / 10, mis - (mis / 250) * a);
    long long sum2 = max((3 * vas) / 10, vas - (vas / 250) * b);
    if (sum1 > sum2) {
        cout << "Misha";
    }   else if (sum2 > sum1) {
        cout << "Vasya";
    }   else cout << "Tie";
    return 0;
}
