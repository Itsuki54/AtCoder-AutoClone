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
    ll n, m;
    cin >> n >> m;
    ll a[m], b[m];
    vector<set<ll>> st(n + 1);
    rep(i, m)
    {
        cin >> a[i] >> b[i];
    }
    rep(i, m)
    {
        st[a[i]].insert(b[i]);
        st[b[i]].insert(a[i]);
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll count = 0;
        for (ll j : st[i])
        {
            if (j < i)
                count++;
        }
        if (count == 1)
            ans++;
    }
    cout << ans << endl;
}
