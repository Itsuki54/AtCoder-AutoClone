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
    ll A, B, C;
    cin >> A >> B >> C;
    ll ans = 0;
    ll n[3];
    n[0] = A;
    n[1] = B;
    n[2] = C;
    sort(n, n + 3);
    ans += n[2] - n[1];
    if ((n[2]-n[0] + ans) % 2 == 0)
    {
        ans += (n[2] - n[0] - ans) / 2;
    }
    else
    {
        ans += (n[2] - n[0] - ans) / 2 + 2;
    }
    cout << ans << endl;
}