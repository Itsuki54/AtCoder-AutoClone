#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll N;
    cin >> N;
    for (ll i = 0; i <= N; i++)
    {
        for (ll j = 0; j <= N; j++)
        {
            for (ll k = 0; k <= N; k++)
            {
                if (i + j + k <= N)
                {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }
}
