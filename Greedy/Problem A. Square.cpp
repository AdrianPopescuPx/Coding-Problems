// problem link: https://codeforces.com/contest/1921/problem/A
// find the lenght by finding the same coordinate

#include <iostream>
using namespace std;

int main() {
    
    int t, mat[4][2];
    cin >> t;
    while(t--) {
        long long res;
        for (int i = 0 ; i < 4; ++i) {
            for (int j = 0; j < 2; j++) {
                cin >> mat[i][j];
            }
        }
        for (int i = 0 ; i < 2; ++i) {
            for (int j = 0; j < 3; j++) {
                for (int k = j + 1; k < 4; k++) {
                    if (mat[j][i] == mat[k][i]) {
                        if (i == 0)
                            res = abs(mat[j][i+1] - mat[k][i+1]);
                        else res = abs(mat[j][i-1] - mat[k][i-1]);
                        break;
                    }
                }
                
            }
        }
        cout << res * res << '\n';
    }   

    return 0;
}
