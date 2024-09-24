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
    rep(s.size())
    {
        if (i == s.size() - 1)
        {
            cout << "4" << endl;
        }
        else
            cout << s[i];
    }
}
