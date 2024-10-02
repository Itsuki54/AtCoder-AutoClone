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

ll f(ll r, const vector<ll> &x, const vector<ll> &s)
{
    ll pos = upper_bound(x.begin(), x.end(), r) - x.begin();
    if (pos == sz(x))
    {
        return s.back();
    }
    return s[pos];
};

int main()
{
    ll N;
    cin >> N;
    vector<ll> x(N), p(N);
    rep(i, N) cin >> x[i];
    rep(i, N) cin >> p[i];
    vector<ll> s(N + 1);
    s[0] = 0;
    rep(i, N) s[i + 1] = s[i] + p[i];
    ll q;
    cin >> q;
    rep(i, q)
    {
        ll l, r;
        cin >> l >> r;
        ll ans = f(r, x, s) - f(l - 1, x, s);
        cout << ans << endl;
    }
}
