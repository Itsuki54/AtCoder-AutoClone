#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll N;
    cin >> N;
    ll A[N];
    ll B[N];
    rep(N - 1) cin >> B[i];
    ll ans = 0;
    rep(N - 1)
    {
        if (i == 0)
            ans += B[i];
        else
            ans += min(B[i], B[i - 1]);
    }
    cout << ans +B[N-2]<< endl;
}
