#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    double N;
    cin >> N;
    if (int(N * 1.08) < 206)
        cout << "Yay!" << endl;
    else if (int(N * 1.08) == 206)
        cout << "so-so" << endl;
    else
        cout << ":(" << endl;
    return 0;
}
