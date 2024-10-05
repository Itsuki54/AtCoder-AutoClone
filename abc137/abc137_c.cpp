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
    ll N;
    cin >> N;
    vector<string> S;
    rep(N)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());

        S.push_back(s);
    }
    ll ans = 0;
    sort(S.begin(), S.end());
    map<string, ll> T;
    rep(N)
    {
        T[S[i]]++;
    }
    for (auto itr = T.begin(); itr != T.end(); ++itr)
    {
        ll n = itr->second;
        ans += n * (n - 1) / 2;
    }
    cout << ans << endl;
}