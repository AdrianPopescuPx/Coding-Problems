#include <bits/stdc++.h>
using namespace std;

/*
Sort the elements of the given array V[];
for each element V[i] of the given array, determine the first digit and store it in another array, P[i];
iterate through the maximum 9 possible values of elements in P[], and for each, display the corresponding values from V[].
*/

int n, V[1001], P[1001], c, F[10];

int main() {
    cin >> c >> n;
    for (int i = 1; i <= n; i++)
        cin >> V[i];
    if (c == 1) {
        int S = 0, E = 0;
        for (int i = 1; i <= n; i++) {
            int x = V[i];
            while (x > 99)
                x /= 10;
            if (x % 2 == 0)
                S++;
            else
                E++;
        }
        cout << S << " " << E << " ";
    } else {
        for (int i = 1; i <= n; i++) {
            int x = V[i];
            while (x > 9)
                x /= 10;
            F[x]++;
            P[i] = x;
        }
        for (int i = 1; i < n; i++)
            for (int j = i + 1; j <= n; j++)
                if (P[i] > P[j]) {
                    swap(P[i], P[j]);
                    swap(V[i], V[j]);
                } else if (P[i] == P[j])
                    if (V[i] > V[j])
                        swap(V[i], V[j]);
        for (int i = 1; i < 10; i++)
            if (F[i]) {
                cout << i << " ";
                for (int j = 1; j <= n; j++)
                    if (P[j] == i)
                        cout << V[j] << " ";
                cout << "\n";
            }
    }
    return 0;
}