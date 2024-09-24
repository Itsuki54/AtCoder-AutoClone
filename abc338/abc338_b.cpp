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
    string s;
    cin >> s;
    ll n = s.size();
    sort(s.begin(), s.end());

    // 文字カウント
    vector<ll> cnt(26, 0);
    rep(n)
    {
        cnt[s[i] - 'a']++;
    }

    ll maxCount = 0;
    rep(26)
    {
        maxCount = max(maxCount, cnt[i]);
    }

    rep(26)
    {
        if (cnt[i] == maxCount)
        {
            cout << (char)('a' + i) << endl;
            return 0;
        }
    }
}
