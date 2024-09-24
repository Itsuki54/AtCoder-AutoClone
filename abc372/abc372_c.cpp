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

ll countABC(const string &S, ll N) {
    ll count = 0;
    for (ll i = 0; i < N - 2; i++) {
        if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C') {
            count++;
        }
    }
    return count;
}

int main() {
    ll N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    ll ans = countABC(S, N);

    rep(i, Q) {
        ll x;
        string C;
        cin >> x >> C;
        x--;

        for (ll j = max(0LL, x - 2); j <= min(N - 3, x); j++) {
            if (S[j] == 'A' && S[j + 1] == 'B' && S[j + 2] == 'C') {
                ans--;
            }
        }

        S[x] = C[0];

        for (ll j = max(0LL, x - 2); j <= min(N - 3, x); j++) {
            if (S[j] == 'A' && S[j + 1] == 'B' && S[j + 2] == 'C') {
                ans++;
            }
        }

        cout << ans << endl;
    }
}
