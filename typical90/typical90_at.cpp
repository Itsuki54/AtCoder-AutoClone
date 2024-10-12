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
    cin >> n;
    vl a(46, 0), b(46, 0), c(46, 0);
    rep(i, n)
    {
        ll aa;
        cin >> aa;
        a[aa % 46]++;
    }
    rep(i, n)
    {
        ll bb;
        cin >> bb;
        b[bb % 46]++;
    }
    rep(i, n)
    {
        ll cc;
        cin >> cc;
        c[cc % 46]++;
    }
    ll ans = 0;
    rep(i, 46)
    {
        rep(j, 46)
        {
            rep(k, 46)
            {
                if ((i + j + k) % 46 == 0)
                    ans += a[i] * b[j] * c[k];
            }
        }
    }
    cout << ans << endl;
}
