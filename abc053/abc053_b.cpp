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
    ll a = -1, z = -1;
    rep(s.size())
    {
        if (s[i] == 'A')
        {
            a = i;
            break;
        }
    }
    for (ll i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'Z')
        {
            z = i;
            break;
        }
    }
    cout << z - a + 1 << endl;
}
