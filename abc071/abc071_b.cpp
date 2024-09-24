#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)

bool isNumber(const string &str)
{
    for (char const &c : str)
    {
        if (!isdigit(c))
            return false;
    }
    return true;
}

int main()
{
    string S;
    cin >> S;
    rep(26)
    {
        char a = 'a' + i;
        if (S.find(a) != string::npos)
            continue;
        else
        {
            cout << a << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
