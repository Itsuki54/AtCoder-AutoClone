#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll N;
    cin >> N;
    ll H[N];
    rep(N) cin >> H[i];
    ll ans = 0, dp[N - 1];
    dp[0] = 0;
    rep1(1, N)
    {
        if (H[i - 1] >= H[i])
        {
            dp[i] = dp[i - 1] + 1;
        }
        else
        {
            dp[i] = 0;
        }
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
}
