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
    if (S[0] != S[1] && S[1] != S[2]&&S[0]!=S[2])
        cout << "6" << endl;
    else if (S[0] == S[1] && S[1] == S[2])cout << "1" << endl;
    else
        cout << "3" << endl;
}