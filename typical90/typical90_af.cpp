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
    ll a[n][n];
    rep(i, n) rep(j, n) cin >> a[i][j];
    ll m;
    cin >> m;
    vector<vector<bool>> bad(n + 1, vector<bool>(n + 1, false));
    vl P(n, 0);
    rep(i, n) P[i] = i;
    rep(i, m)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        bad[x][y] = true;
        bad[y][x] = true;
    }
    ll ans = inf;
    do
    {
        ll sum = 0;
        bool flag = false;
        rep(i, n)
        {
            sum += a[P[i]][i];
            if (i < n - 1 && bad[P[i]][P[i + 1]] == true)
                flag = true;
        }
        if (flag == false)
            ans = min(ans, sum);
    } while (next_permutation(P.begin(), P.end()));
    if (ans == inf)
        cout << -1 << endl;
    else
        cout << ans << endl;
}
