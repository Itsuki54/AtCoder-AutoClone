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
    ll H, W;
    cin >> H >> W;
    ll A[H][W];
    rep(i, H) rep(j, W) cin >> A[i][j];
    ll h[H], w[W];
    rep(i, H) h[i] = 0;
    rep(i, W) w[i] = 0;
    rep(i, H)
    {
        rep(j,W){
            h[i] += A[i][j];
            w[j] += A[i][j];
        }
    }
    rep(i,H){
        rep(j,W){
            cout << h[i] + w[j] - A[i][j] << " ";
        }
        cout << endl;
    }
}
