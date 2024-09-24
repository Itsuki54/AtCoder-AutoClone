#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    string a, b;
    cin >> a >> b;
    rep(a.size())
    {
        if (a == b)
        {
            cout << "Yes" << endl;
            return 0;
        }
        a = a[a.size() - 1] + a.substr(0, a.size() - 1);
    }
    cout << "No"<<endl;
}
