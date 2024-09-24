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
    string W[N], w[N];
    bool flag = true;
    rep(N)
    {
        cin >> W[i];
        w[i] = W[i][W[i].size() - 1];
        if (i > 0)
        {
            if (W[i][0] != W[i - 1][W[i - 1].size() - 1])
                flag = false;
            repj(i - 1)
            {
                if (W[i] == W[j])
                    flag = false;
            }
        }
    }
    cout << (flag ? "Yes" : "No") << endl;
}
