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
    ll N, M;
    cin >> N >> M;
    ll A[N], B[N];
    rep(N)
    {
        cin >> A[i] >> B[i];
    }
    pair<ll, ll> p[N];
    rep(N)
    {
        p[i] = make_pair(A[i], B[i]);
    }
    sort(p, p + N);
    ll ans = 0;

    for (ll i = 0; i < N; i++)
    {
        if (M == 0)
        {
            cout << ans << endl;
            return 0;
        }
        else if (M > p[i].second)
        {
            ans += p[i].second * p[i].first;
            M -= p[i].second;
        }
        else
        {
            ans += M * p[i].first;
            cout << ans << endl;
            return 0;
        }
    }
}