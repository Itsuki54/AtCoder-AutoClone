
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
    ll N;
    cin >> N;
    vl A(N);
    rep(i, N) cin >> A[i];
    vl B(N + 1);
    B[0] = A[0];
    ll ans;
    if (A[0] < 0)
        ans = A[0];
    else
        ans = 0;
    Rep(i, 1, N)
    {
        B[i] = B[i - 1] + A[i];
        if (B[i] < 0)
            chmin(ans, B[i]);
    }
    cout << B[N - 1] - ans << endl;
}
