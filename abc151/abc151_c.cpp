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
    ll N, M;
    bool solved[101010];
    ll wa[101010];
    cin >> N >> M;
    rep(M)
    {
        ll p;
        string S;
        cin >> p >> S;
        p--;
        if (S == "WA" and !solved[p])
            wa[p]++;
        if (S == "AC")
            solved[p] = true;
    }
    ll correct = 0, penalty = 0;
    rep(N)
    {
        if (solved[i])
        {
            correct++;
            penalty += wa[i];
        }
    }

    cout << correct << " " << penalty << endl;
}
