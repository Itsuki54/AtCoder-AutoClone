#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    double N;
    cin >> N;
    double enu = 0;
    rep1(1, N + 1)
    {
        if (i % 2 == 1)
        {
            enu++;
        }
    }
    cout << setprecision(20) <<enu / N << endl;
}
