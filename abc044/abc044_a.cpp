#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll N, K, X, Y, sum = 0;
    cin >> N >> K >> X >> Y;
    if(N>K){
    rep(K) sum += X;
    rep(N - K) sum += Y;
    cout << sum << endl;
    }
    else cout << N*X << endl;
}