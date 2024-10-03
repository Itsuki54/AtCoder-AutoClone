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
    ll n;
    vector<ll> a(3);
    cin >> n >> a[0] >> a[1] >> a[2];
    ll ans = inf;
    rep(i, 10000)
    {
        rep(j, 10000 - i)
        {
            ll sum = n - a[0] * i - a[1] * j;
            ll c = i + j + sum / a[2];
            if (sum % a[2] == 0 && sum >= 0 && c < 9999)
                ans = min(ans, c);
        }
    }
    cout << ans << endl;
}
