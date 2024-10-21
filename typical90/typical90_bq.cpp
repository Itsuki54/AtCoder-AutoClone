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

ll mod = 1000000007;
ll powmod(ll x, ll n)
{
    ll res = 1;
    while (n > 0)
    {
        if (n % 2)
            res = res * x % mod;
        x = x * x % mod;
        n /= 2;
    }
    return res;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << (n == 1 ? 1 : 0) << endl;
    }
    else if (n == 1)
        cout << k % mod << endl;
    else
        cout << (k * (k - 1) % mod * powmod(k - 2, n - 2)) % mod << endl;
}
