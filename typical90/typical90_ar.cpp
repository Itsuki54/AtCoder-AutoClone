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
    ll n, q;
    cin >> n >> q;
    deque<ll> a;
    rep(i, n)
    {
        ll b;
        cin >> b;
        a.push_back(b);
    }
    rep(i, q)
    {
        ll t, x, y;
        cin >> t >> x >> y;
        if (t == 1)
            swap(a[x - 1], a[y - 1]);
        else if (t == 2)
        {
            a.push_front(a[sz(a) - 1]);
            a.pop_back();
        }
        else
            cout << a[x - 1] << endl;
    }
}
