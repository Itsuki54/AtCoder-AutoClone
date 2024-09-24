#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main() {
    // 配列の場合
    int n, a[109], j = 0, A, B;
    bool q, p;
    cin >> n;
    int Q[n], P[n];
    rep(n)cin >> Q[i];
    rep(n)cin >> P[i];
    for (int i = n; i > 0; i--) a[i] = i;
    do {
        q = true;
        p = true;
        j++;
        rep(n) {
            //cout << "a:" << a[i + 1] << "Q:" << Q[i];
            if (a[i + 1] != Q[i])q = false;
        }
        if (q)A = j;
        rep(n) {
            if (a[i + 1] != P[i])p = false;
        }
        if (p)B = j;
        cout << endl;
    } while (next_permutation(a, a + n + 1));
    cout << abs(A - B) << endl;
}
