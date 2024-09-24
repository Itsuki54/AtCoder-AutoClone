#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll N;
    cin >> N;
    map<string, ll> mp;
    rep(N)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    ll M = -1;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr)
    {
        M = max(M, itr->second);
    }
    for (auto itr = mp.begin(); itr != mp.end(); ++itr)
    {
        if (itr->second == M)
        {
            cout << itr->first << endl;
        }
    }
}
