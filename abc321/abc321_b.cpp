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
#define rev(v) reverse(all(v))
#define RSORT(v) reverse(sort(all(v)))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define sz(x) (ll)(x).size()
#define endl "\n"
#define print(x) cout << x << endl
#define syosu(x) fixed << setprecision(x)
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

ll keta (ll n){
    ll res = 0;
    while(n > 0){
        n /= 10;
        res++;
    }
    return res;
}

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N-1);
    for (int i = 0; i < N-1; ++i) cin >> A[i];
    
    int a = 101, b = -1, s = 0;
    rep(i, N-1){
        a = min(a, A[i]);
        b = max(b, A[i]);
        s += A[i];
    }
    
    if (s - b >= X) {
        cout << 0 << endl;
    } else if (s - a < X) {
        cout << -1 << endl;
    } else {
        cout << X - (s - a - b) << endl;
    }
}
