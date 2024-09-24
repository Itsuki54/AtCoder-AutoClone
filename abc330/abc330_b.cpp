#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define rep(n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, L, R;
    cin >> N >> L >> R;
    int A[N], X[N];

    rep(N) {
        cin >> A[i];
        if (A[i] < L) {
            X[i] = L;
        } else if (A[i] > R) {
            X[i] = R;
        } else {
            X[i] = A[i];
        }
    }

    rep(N) cout << X[i] << " ";
    cout << endl;

    return 0;
}
