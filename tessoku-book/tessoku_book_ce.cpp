#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll<<60;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main() {
    ll N;
    cin >> N;
    ll A[N];
    rep(N)cin >> A[i];
    ll Q;
    cin >> Q;
    ll R[Q], L[Q];
    rep(Q)cin >> L[i] >> R[i];
    ll sum[N + 1];
    sum[0] = 0;

    for (ll i = 1; i <= N; i++) {
        sum[i] = sum[i - 1] + A[i - 1];
    }
    rep(Q) {
        ll num = sum[R[i]] - sum[L[i] - 1];
        if (num == (R[i] - L[i] + 1) / 2 && (R[i] - L[i] + 1) % 2 == 0) cout << "draw" << endl;
        else if (num > (R[i] - L[i] + 1) / 2) cout << "win" << endl;
        else cout << "lose" << endl;
    }
}
