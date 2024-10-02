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

vector<vector<bool>> inputGraph(ll n)
{
    vector<vector<bool>> g(n, vector<bool>(n));
    ll m;
    cin >> m;
    rep(i, m)
    {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a][b] = true;
        g[b][a] = true;
    }
    return g;
}

int main()
{
    ll n;
    cin >> n;
    auto g = inputGraph(n);
    auto h = inputGraph(n);
    vector<vector<ll>> a(n, vector<ll>(n));
    rep(i, n)
    {
        rep(j, n)
        {
            if (j > i)
            {
                cin >> a[i][j];
                a[j][i] = a[i][j];
            }
        }
    }
    ll ans = inf;
    vector<ll> p(n);
    rep(i, n) p[i] = i;
    do
    {
        ll now = 0;
        rep(i, n)
        {
            rep(j, i)
            {
                if (h[i][j] != g[p[i]][p[j]])
                {
                    now += a[i][j];
                }
            }
        }
        ans = min(now, ans);
    } while (next_permutation(p.begin(), p.end()));
    cout << ans << endl;
}
