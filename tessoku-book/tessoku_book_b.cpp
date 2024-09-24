#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll<<60;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main() {
    ll N, X;
    ll flag = false;
    cin >> N >> X;
    ll A[N];
    rep(N) {
        cin >> A[i];
        if (A[i] == X)flag = true;
    }
    if (flag)cout << "Yes" << endl;
    else cout << "No" << endl;
}
