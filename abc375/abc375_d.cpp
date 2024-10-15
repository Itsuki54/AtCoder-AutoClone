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
    string s;
    cin >> s;
    ll ans = 0;
    ll N = s.size();
    vector<vector<ll>> alpha(26, vector<ll>(N + 1, 0));

    rep(i, N)
    {
        rep(j, 26)
        {
            alpha[j][i + 1] = alpha[j][i];
        }
        alpha[s[i] - 'A'][i + 1]++;
    }

    rep(i, N)
    {
        rep(j, 26)
        {
            ans += (alpha[j][N] - alpha[j][i + 1]) * alpha[j][i];
        }
    }
    cout << ans << endl;
}
