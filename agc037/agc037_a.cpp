#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
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
    string a, b, s;
    int gs;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        a += s[i];
        if (a != b)
        {
            b = a;
            gs++;
            a = "";
        }
    }
    cout << gs;
    return 0;
}