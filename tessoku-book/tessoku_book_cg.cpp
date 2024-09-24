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
    ll N, Q;
    cin >> N;
    vl X(N), Y(N);
    ll Mx = -inf, My = -inf;
    rep(i, N)
    {
        cin >> X[i] >> Y[i];
        chmax(Mx, X[i]);
        chmax(My, Y[i]);
    }
    vvl G(Mx + 1, vl(My + 1, 0));
    cin >> Q;
    vl A(Q), B(Q), C(Q), D(Q);
    rep(i, Q) cin >> A[i] >> B[i] >> C[i] >> D[i];
    rep(i, N) G[X[i]][Y[i]]++;
    rep1(i, Mx) rep1(j, My) G[i][j] += G[i - 1][j] + G[i][j - 1] - G[i - 1][j - 1];
    rep(i, Q)
    {
        ll ans = G[C[i]][D[i]] - G[A[i] - 1][D[i]] - G[C[i]][B[i] - 1] + G[A[i] - 1][B[i] - 1];
        print(ans);
    }
}
