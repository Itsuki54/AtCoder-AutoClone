#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

bool isNumber(const string &str)
{
    for (char const &c : str)
    {
        if (isdigit(c) == 0)
            return false;
    }
    return true;
}

int main()
{
    ll A, B;
    string S;
    cin >> A >> B;
    cin >> S;
    if (S[A] != '-')
    {
        cout << "No" << endl;
        return 0;
    }
    rep(A + B + 1)
    {
        if (i == A)
        {
            if (S[A] != '-')
            {
                cout << "No" << endl;
                return 0;
            }
        }
        else if (S[i] == '-')
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
