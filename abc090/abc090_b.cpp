#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll R, L;
    cin >> L >> R;
    ll cnt = 0;
    for (ll i = L; i <= R; i++)
    {
        if (i/10000 == i%10 && (i/1000)%10 == (i/10)%10)
            cnt++;
    }
    cout << cnt << endl;
}
