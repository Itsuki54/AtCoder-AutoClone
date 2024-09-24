#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    int N[5];
    rep(5)
    {
        cin >> N[i];
    }
    ll cnt = inf;
    rep(5)
    {
        ll sum = 0;
        repj(5)
        {
            if (i == j)
                sum += N[i];
            else
                sum += (N[j]+9)/10*10;
        }
        cnt = min(cnt, sum);
    }
    cout << cnt << endl;
}
