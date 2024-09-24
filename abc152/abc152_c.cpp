#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll N, M = inf, cnt = 0;
    cin >> N;
    ll A[N], B[N];
    rep(N)
    {
        cin >> A[i];
        B[i] = min(A[i], M);
        M = B[i];
    }
    rep(N)
    {
        if (A[i] == B[i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
