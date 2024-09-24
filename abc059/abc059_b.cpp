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
    if (a.size() > b.size())
    {
        cout << "GREATER" << endl;
        return 0;
    }
    else if (a.size() < b.size())
    {
        cout << "LESS" << endl;
        return 0;
    }
    else
    {
        rep(a.size())
        {
            if (a[i] > b[i])
            {
                cout << "GREATER" << endl;
                return 0;
            }
            else if (a[i] < b[i])
            {
                cout << "LESS" << endl;
                return 0;
            }
        }
    }
    cout << "EQUAL" << endl;
}
