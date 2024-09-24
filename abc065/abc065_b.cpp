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
    ll N;
    cin >> N;
    ll A[N];
    rep(N)
    {
        cin >> A[i];
    }
    ll B[N];
    rep(N) B[i] = 0;
    B[0] = 1;
    ll ans = 0, tmp = 0, cnt = 1;
    vector<ll> Count;
    while (B[1] == 0)
    {
        B[A[cnt - 1] - 1]++;
        B[cnt - 1] = 0;
        cnt = A[cnt - 1];
        ans++;
        if (find(Count.begin(), Count.end(), cnt) != Count.end())
        {
            cout << -1 << endl;
            return 0;
        }
        Count.push_back(cnt);
        if (B[1] == 1)
        {
            cout << ans << endl;
        }
    }
}