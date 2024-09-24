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
#define rep1j(I, n) for (ll j = (I); j < (ll)(n); j++)

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
    string S;
    cin >> S;
    ll N = S.size();
    ll ans = N;
    string tmp1, tmp2;
    if (N % 2 == 0)
    {
        for (ll i = 2; i <= N; i += 2)
        {
            repj((N - i) / 2)
            {
                tmp1 += S[j];
                tmp2 += S[j + (N - i) / 2];
            }
            if (tmp1 == tmp2)
            {
                ans = N - i;
                cout << ans << endl;
                return 0;
            }
            tmp1 = "";
            tmp2 = "";
        }
    }
    else
    {
        for (ll i = 1; i <= N; i += 2)
        {
            repj((N - i) / 2)
            {
                tmp1 += S[j];
                tmp2 += S[j + (N - i) / 2];
            }
            if (tmp1 == tmp2)
            {
                ans = N - i;
                cout << ans << endl;
                return 0;
            }
            tmp1 = "";
            tmp2 = "";
        }
    }
    cout << 1 << endl;
}
