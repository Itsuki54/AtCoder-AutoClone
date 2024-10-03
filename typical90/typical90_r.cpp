#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vl = vector<ll>;
using vvl = vector<vl>;
#define inf 1ll << 60
#define rep(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define sz(x) (ll)(x).size()
#define print(x) cout << x << endl
const vector<int> dx = {-1, 0, 1, 0};
const vector<int> dy = {0, 1, 0, -1};

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
ld PI = 3.14159265358979;

int main()
{
    double t, l, x, y;
    ll q;
    cin >> t;
    cin >> l >> x >> y;
    cin >> q;
    rep(i, q)
    {
        ll e;
        cin >> e;
        ld cx = 0;
        ld cy = -(l / 2.0) * sin(e / t * 2.0 * PI);
        ld cz = (l / 2.0) - (l / 2.0) * cos(e / t * 2.0 * PI);
        ld d1 = sqrt((cx - x) * (cx - x) + (cy - y) * (cy - y));
        ld d2 = cz;
        ld kaku = atan2(d2, d1);
        cout << fixed << setprecision(12) << kaku * 180.0 / PI << endl;
    }
}
