#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = double;
using vl = vector<ll>;
using vvl = vector<vl>;
using vld = vector<ld>;
using vvld = vector<vld>;
using pl = pair<ll, ll>;
using mll = map<ll, ll>;
#define inf 1ll << 60
#define rep(i, n) for (int i = 0; i < n; i++)
#define per(i, n) for (int i = n - 1; i >= 0; i--)
#define Rep(i, sta, n) for (int i = sta; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define per1(i, n) for (int i = n; i >= 1; i--)
#define Rep1(i, sta, n) for (int i = sta; i <= n; i++)
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define sz(x) (ll)(x).size()
#define endl "\n"
#define print(x) cout << x << endl
const vector<int> dx = {1, 0, -1, 0, 1, -1, 1, -1};
const vector<int> dy = {0, 1, 0, -1, 1, 1, -1, -1};
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

int main()
{
    ll H, W;
    cin >> H >> W;
    vvl X(H + 1, vl(W + 1));
    Rep(i, 1, H + 1) Rep(j, 1, W + 1) cin >> X[i][j];
    ll N;
    cin >> N;
    vl A(N), B(N), C(N), D(N);
    rep(i, N) cin >> A[i] >> B[i] >> C[i] >> D[i];
    vvl Y(H + 1, vl(W + 1));
    rep(i, H + 1) rep(j, W + 1) Y[i][j] = 0;

    Rep(i, 1, H + 1)
    {
        Rep(j, 1, W+1)
        {
            Y[i][j] = Y[i][j - 1] + X[i][j];
        }
    }

    Rep(j, 1, W + 1)
    {
        Rep(i, 1, H+1)
        {
            Y[i][j] = Y[i - 1][j] + Y[i][j];
        }
    }

    rep(i, N)
    {
        ll ans = 0;
        ans = Y[C[i]][D[i]] - Y[A[i] - 1][D[i]] - Y[C[i]][B[i] - 1] + Y[A[i] - 1][B[i] - 1];
        print(ans);
    }
}
