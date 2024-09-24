#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll N, T, A;
    cin >> N >> T >> A;
    ll H[N];
    rep(N)
    {
        cin >> H[i];
    }

    ll ans = 0;
    double a[N];
    rep(N)
    {
        double tmp = 0;
        tmp = T - (H[i] * 0.006);
        a[i] = abs(A - tmp);
        if (i == 0)
        {
            ans = i;
        }
        else if (a[ans] > a[i])
        {
            ans = i;
        }
    }
    cout << ans + 1 << endl;
}
