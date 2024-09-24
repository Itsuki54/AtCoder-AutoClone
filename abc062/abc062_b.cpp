#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll H, W;
    cin >> H >> W;
    string S[H];
    rep(H)
    {
        cin >> S[i];
    }

    rep(W+2)cout << "#";
    cout << endl;
    rep(H)
    {
        cout << "#" << S[i] << "#" << endl;
    }
    rep(W+2)cout << "#";
    
}
