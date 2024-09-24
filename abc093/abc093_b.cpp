#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll A, B, K;
    cin >> A >> B >> K;
    rep(K)
    {
        if (A + i <= B)
        {
            cout << A + i << endl;
        }
    }
    rep(K)
    {
        if (B - K + 1 + i > A + K - 1)
        {
            cout << B - K + 1 + i << endl;
        }
    }
}
