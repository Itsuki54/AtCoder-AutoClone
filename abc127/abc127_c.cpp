#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
   /* char alphabet;
    cin >> alphabet;

    int ordinalNumber = alphabet - 'a' + 1;
    cout << ordinalNumber << endl;*/

    ll N, M;
    cin >> N >> M;
    ll L[M], R[M];
    rep(M) cin >> L[i] >> R[i];

    ll minR = inf, maxL = 0;

    rep(M)
    {
        minR = min(minR, R[i]);
        maxL = max(maxL, L[i]);
    }
    cout << max(0ll, minR - maxL + 1) << endl;
}
