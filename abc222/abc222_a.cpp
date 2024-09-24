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
    if (N == 0)
        cout << "0000" << endl;
    else if (N / 10 == 0)
        cout << "000" << N << endl;
    else if (N / 100 == 0)
        cout << "00" << N << endl;
    else if (N / 1000 == 0)
        cout << "0" << N << endl;
        else cout << N << endl;
}
