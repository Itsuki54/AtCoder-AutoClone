#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vl = vector<ll>;
using vvl = vector<vl>;
#define inf 1ll << 60
#define rep(i, n) for (ll i = 0; i < n; i++)
#define Rep(i, start, n) for (ll i = start; i < n; i++)
#define pb push_back
#define sz(x) (ll)(x).size()
#define print(x) cout << x << endl
const vector<ll> dx = {-1, 0, 1, 0};
const vector<ll> dy = {0, 1, 0, -1};
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
    ll n, p, q;
    cin >> n >> p >> q;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll ans = 0;
    rep(i, n)
    {
        Rep(j, i + 1, n)
        {
            Rep(k, j + 1, n)
            {
                Rep(l, k + 1, n)
                {
                    Rep(m, l + 1, n)
                    {
                        ll tmp = a[i] % p * a[j] % p * a[k] % p * a[l] % p * a[m] % p;
                        if (q == tmp % p)
                        {
                            ans++;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
}
