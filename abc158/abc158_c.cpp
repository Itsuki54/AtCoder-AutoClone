#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll A, B;
    cin >> A >> B;
    rep(10000)
    {
        double x = i * 0.08;
        double y = i * 0.1;
        if (int(x) == A && int(y) == B)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}
