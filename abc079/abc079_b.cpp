#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll a, b[100];
    cin >> a;
    b[0] = 2;
    b[1] = 1;
    rep1(2, a+1)
    {
        b[i] = b[i - 1] + b[i - 2];
    }
    cout << b[a] << endl;
}
