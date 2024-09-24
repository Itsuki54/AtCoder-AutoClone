#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll N, S, K;
    cin >> N >> S >> K;
    ll P[N], Q[N];
    ll sum = 0;
    rep(N) cin >> P[i] >> Q[i];
    rep(N)
    {
        sum += P[i] * Q[i];
    }
    if (sum <S)
        cout << sum+K << endl;
        else
            cout << sum << endl;
}
