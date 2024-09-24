#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define reep(i, n) for (ll(i) = 0; (i) < (ll)(n); (i)++)
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
    ll a;
    cin >> a;
    ll ans = 1;
    ll n[a];
    rep(a)
    {
        cin >> n[i];
    }
    sort(n, n + a);
    rep(a)
    {
        if (n[i] == 0)
        {
            cout << 0 << endl;
            return 0;
        }
    }
    rep(a)
    {
        if (ans > 1000000000000000000 / n[i])
        {
            cout << -1 << endl;
            return 0;
        }
        ans *= n[i];
    }
    cout << ans << endl;
}
