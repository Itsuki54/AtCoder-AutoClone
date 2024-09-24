#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (abs(a - b) <= d && abs(b - c) <= d)
    {
        cout << "Yes" << endl;
    }
    else if (abs(a - c) <= d)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}