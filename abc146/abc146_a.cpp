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
    if (S == "SUN")
        cout << 7 << endl;
    else if (S == "MON")
        cout << 6 << endl;
    else if (S == "TUE")
        cout << 5 << endl;
    else if (S == "WED")
        cout << 4 << endl;
    else if (S == "THU")
        cout << 3 << endl;
    else if (S == "FRI")
        cout << 2 << endl;
    else if (S == "SAT")
        cout << 1 << endl;
}
