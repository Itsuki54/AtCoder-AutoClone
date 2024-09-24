#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define repk(n) for (ll k = 0; k < (ll)(n); k++)
#define repl(n) for (ll l = 0; l < (ll)(n); l++)
#define reph(n) for (ll h = 0; h < (ll)(n); h++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

bool compare(const tuple<string, ll, ll> &a, const tuple<string, ll, ll> &b)
{
    if (get<0>(a) != get<0>(b))
    {
        return get<0>(a) < get<0>(b);
    }
    else
    {
        return get<1>(a) > get<1>(b);
    }
}
int main()
{
    ll N;
    cin >> N;
    rep(N / 100 +1)
    {
        repj(N / 100+1)
        {
            repk(N / 100+1)
            {
                repl(N / 100+1)
                {
                    reph(N / 100+1)
                    {
                        for (int I = 0; I < N / 100+1; I++)
                        {
                            if (i * 100 + j * 101 + k * 102 + l * 103 + h * 104 + I * 105 == N)
                            {
                                cout << 1 << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << 0 << endl;
}
