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
    ll n, q;
    cin >> n >> q;
    vl a(n);
    rep(i, n) cin >> a[i];

    ll ans = 0;
    vl b(n - 1);

    rep(i, n - 1)
    {
        b[i] = a[i + 1] - a[i];
        ans += abs(b[i]);
    }

    rep(i, q)
    {
        ll l, r, v;
        cin >> l >> r >> v;
        l--;
        r--;

        ll mae = 0;
        if (l - 1 >= 0)
            mae += abs(b[l - 1]);
        if (r < n - 1)
            mae += abs(b[r]);

        if (l - 1 >= 0)
            b[l - 1] += v;
        if (r < n - 1)
            b[r] -= v;

        ll ato = 0;
        if (l - 1 >= 0)
            ato += abs(b[l - 1]);
        if (r < n - 1)
            ato += abs(b[r]);

        ans += (ato - mae);
        cout << ans << endl;
    }
}
