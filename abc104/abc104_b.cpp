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
    if (S[0] != 'A')
    {
        cout << "WA" << endl;
        return 0;
    }
    else if (S[1] == 'A')
    {
        cout << "WA" << endl;
        return 0;
    }
    bool flag = false;
    bool cflag = false;
    rep(S.size())
    {
        if (i > 1 && i < S.size() - 1)
        {
            if (S[i] == 'A')
            {
                cout << "WA" << endl;
                return 0;
            }
            else if (S[i] == 'C' && cflag)
            {
                cout << "WA" << endl;
                return 0;
            }
            else if (S[i] == 'C')
            {
                flag = true;
                cflag = true;
            }
            else if (S[i] < 'a' || S[i] > 'z')
            {
                cout << "WA" << endl;
                return 0;
            }
        }
        else if (i > 0)
        {
            if (S[i] < 'a' || S[i] > 'z')
            {
                cout << "WA" << endl;
                return 0;
            }
        }
    }
    if (!flag)
    {
        cout << "WA" << endl;
        return 0;
    }
    cout << "AC" << endl;
}
