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
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll q;
    cin >> q;
    sort(a.begin(), a.end());
    rep(i, q)
    {
        ll b;
        cin >> b;
        auto it = lower_bound(a.begin(), a.end(), b);
        if (it == a.begin())
        {
            cout << abs(*it - b) << endl;
        }
        else if (it == a.end())
        {
            cout << abs(*(it - 1) - b) << endl;
        }
        else
        {
            ll back = *(it - 1);
            ll front = *it;
            cout << min(abs(back - b), abs(front - b)) << endl;
        }
    }
}
