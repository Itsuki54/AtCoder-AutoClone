#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    string S;
    cin >> S;
    ll size = S.length();
    if (S[size - 1] == 'r' && S[size - 2] == 'e')
        cout << "er" << endl;
    else
        cout << "ist" << endl;
}