#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    string s;
    cin >> s;

    pair<ll, ll> p[26];
    rep(i, 26)
    {
        p[i].first = int(s[i] - 'A');
        p[i].second = i;
    }

    sort(p, p + 26, [](const auto &a, const auto &b)
         { return a.first < b.first; });

    ll A = p[0].second;
    ll ans = 0;
    rep(i, 26)
    {
        if (p[i].second > A)
            ans += p[i].second - A;
        else
            ans += A - p[i].second;

        A = p[i].second;
    }

    cout << ans << endl;
}
