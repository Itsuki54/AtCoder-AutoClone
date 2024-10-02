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

ll eight(string n)
{
    ll res = 0;
    rep(i, sz(n))
    {
        res = int(n[i] - '0') + res * 8;
    }
    return res;
}

string nine(ll n)
{
    if (n == 0)
        return "0";
    string res;
    while (n > 0)
    {
        res = char(n % 9 + '0') + res;
        n /= 9;
    };
    return res;
}

int main()
{
    ll k;
    string n;
    cin >> n >> k;
    rep(i, k)
    {
        n = nine(eight(n));
        rep(j, sz(n))
        {
            if (n[j] == '8')
                n[j] = '5';
        }
    }
    cout << n << endl;
}
