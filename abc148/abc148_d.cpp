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
    ll a[N];
    rep(N)
    {
        cin >> a[i];
    }
    ll tmp = 1;
    rep(N)
    {
        if (a[i] == tmp)
        {
            tmp++;
        }
    }
    if (tmp == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << N - tmp + 1 << endl;
    }
}
