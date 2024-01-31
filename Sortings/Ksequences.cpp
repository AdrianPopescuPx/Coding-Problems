#include <iostream>
#include <cstring>
using namespace std;

/*

Given a sequence with n elements, natural numbers, numbered starting from 1, and a number k. We consider k subsequences of the sequence as follows:

the first subsequence is formed by the elements in the sequence numbered 1, k+1, 2k+1, ...
the second subsequence is formed by the elements in the sequence numbered 2, k+2, 2k+2, ...
...
the k-th subsequence is formed by the elements in the sequence numbered k, 2k, 3k, ...
Sort each of these subsequences in ascending order and display the resulting sequence.

*/

int main() {
    

    int n, k;
    cin >> n >> k;
    int vec[n+1];
    for (int i = 1; i <= n; ++i) {
        cin >> vec[i];
    }

    for (int i = 1; i <= k; ++i) {
        for (int j = i; j <= n; j += k) {
            for (int q = j + k; q <= n; q += k) {
                if (vec[j] > vec[q]) {
                    swap(vec[j], vec[q]);
                }
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << vec[i] << ' ';
    }



    return 0;
}
