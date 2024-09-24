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
    string S;
    cin >> S;
    ll N = S.size();
    if (N == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    ll ans = 0, one = 0;
    sort(S.begin(), S.end());
    rep(N)
    {
        if (S[i] == '1')
            one++;
    }
    if(one > N-one){
        cout << 2*(N-one) << endl;
    }
    else{
        cout << 2*(one) << endl;
    }
}
