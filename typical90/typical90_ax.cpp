#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vl = vector<ll>;
using vvl = vector<vl>;
#define inf 1ll << 60
#define rep(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define sz(x) (ll)(x).size()
#define print(x) cout << x << endl
const vector<int> dx = {-1, 0, 1, 0};
const vector<int> dy = {0, 1, 0, -1};
template <typename T>
void chmin(T &a, T b)
{
    a = min(a, b);
}

template <typename T>
void chmax(T &a, T b)
{
    a = max(a, b);
}

ll POW(ll x, ll n)
{
    ll res = 1;
    while (n > 0)
    {
        if (n & 1)
            res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}

int main()
{
    int mod = 1000000007;
    int N, L, dp[100009];
    cin >> N >> L;

    dp[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        if (i < L)
            dp[i] = dp[i - 1];
        else
            dp[i] = (dp[i - 1] + dp[i - L]) % mod;
    }

    cout << dp[N] << endl;
    return 0;
}