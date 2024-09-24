#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define repk(n) for (ll k = 0; k < (ll)(n); k++)
#define repl(n) for (ll l = 0; l < (ll)(n); l++)
#define reph(n) for (ll h = 0; h < (ll)(n); h++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)
#define rep1j(I, n) for (ll j = (I); j < (ll)(n); j++)

bool compare(const tuple<string, ll, ll> &a, const tuple<string, ll, ll> &b)
{
    if (get<0>(a) != get<0>(b))
    {
        return get<0>(a) < get<0>(b);
    }
    else
    {
        return get<1>(a) > get<1>(b);
    }
}
int main()
{
    ll D;
    cin >> D;
    ll ans = inf, x = 0, y = 0;
    rep(sqrt(D) + 1)
    {
        x = i * i;
        y = sqrt(D - x);
        ans = min(ans, abs(x + y * y - D));
        ans = min(ans, abs(x + (y + 1) * (y + 1) - D));
        ans = min(ans, abs(x + (y - 1) * (y - 1) - D));
    }
    cout << ans << endl;
}
