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
    ll T[N];
    rep(N) cin >> T[i];
    ll M;
    cin >> M;
    ll P[M], X[M];
    rep(M) cin >> P[i] >> X[i];

    rep(M)
    {
        ll sum = 0;
        repj(N)
        {
            if (j == P[i] - 1)
            {
                sum += X[i];
            }
            else
            {
                sum += T[j];
            }
        }
        cout << sum << endl;
    }
}
