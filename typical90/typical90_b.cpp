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

bool match(string s)
{
    ll score = 0;
    rep(i, sz(s))
    {
        if (s[i] == '(')
            score++;
        else
            score--;
        if (score < 0)
        {
            return 0;
        }
    }
    if (score == 0)
        return true;
    else
        return false;
}

int main()
{
    ll n;
    cin >> n;
    for (ll bit = 0; bit < (1 << n); bit++)
    {
        string s = "";
        for (ll i = n - 1; i >= 0; i--)
        {
            if (!(bit & (1 << i)))
                s += "(";
            else
                s += ")";
        }
        if (match(s))
            cout << s << endl;
    }
}
