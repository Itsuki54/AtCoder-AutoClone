#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    int N, K, Q;
    cin >> N >> K >> Q;
    ll A[Q], B[N];
    rep(N) B[i] = K;
    rep(Q)
    {
        cin >> A[i];
        B[A[i] - 1]++;
    }
    rep(N)
    {
        if (B[i] - Q > 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
