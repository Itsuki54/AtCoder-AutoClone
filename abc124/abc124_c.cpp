#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    string s;
    cin >> s;
    ll cnt = 0;
    ll snt = 0;
    rep(s.size())
    {
        if (i % 2 == 0)
        {
            if (s[i] == '0')
                cnt++;
        }
        else
        {
            if (s[i] == '1')
                cnt++;
        }
    }
    rep(s.size())
    {
        if (i % 2 == 1)
        {
            if (s[i] == '0')
                snt++;
        }
        else
        {
            if (s[i] == '1')
                snt++;
        }
    }
    cout << min(cnt, snt) << endl;
}
