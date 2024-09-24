#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll N, D;
    cin >> N >> D;
    ll X[N][D];
    rep(N)
    {
        repj(D)
        {
            cin >> X[i][j];
        }
    }
    ll ans = 0;
    rep(N)
    {
        for (ll j = i + 1; j < N; j++)
        {
            ll x = 0;
            for (ll l = 0; l < D; l++)
            {
                x += pow(X[i][l] - X[j][l], 2);
                if (l == D - 1)
                {
                    ll z = sqrt(x);
                    if (z * z == x)
                    {
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}
