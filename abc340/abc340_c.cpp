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

int mylog(ll n) {
    int cnt = 0;
    while(n > 0) {
        n /= 2;
        cnt++;
    }
    return cnt;
}
ll POW(ll x, ll n) {
    ll res = 1;
    while(n > 0) {
        if(n & 1) res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}
int main() {
    ll N;
    cin >> N;
    ll ans = (mylog(N) - 1) * N;
    ans += (N - POW(2, mylog(N) - 1)) * 2;
    print(ans);
}