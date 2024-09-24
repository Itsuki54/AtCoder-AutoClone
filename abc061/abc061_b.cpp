#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll N, M;
    cin >> N >> M;
    ll a[M], b[M];
    ll c[N+1];
    rep(N+1)c[i]=0;
    rep(M)
    {
        cin >> a[i] >> b[i];
        c[a[i]]++;
        c[b[i]]++;
    }
    rep1(1, N + 1)
    {
        cout << c[i] << endl;
    }
}
