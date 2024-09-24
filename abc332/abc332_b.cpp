#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll K, G, M;
    cin >> K >> G >> M;
    ll g = 0, m = 0;
    rep(K)
    {
        if (g >= G)
        {
            g = 0;
        }
        else if (m == 0)
        {
            m = M;
        }
        else if (G - g > m)
        {
            g += m;
            m = 0;
        }
        else
        {
            m -= G - g;

            g = G;
        }
    }
    cout << g << " " << m << endl;
}
