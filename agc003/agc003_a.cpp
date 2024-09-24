#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    string s;
    cin >> s;
    bool nflag = false, wflag = false, sflag = false, eflag = false;
    rep(s.size())
    {
        if (s[i] == 'N')
            nflag = true;
        if (s[i] == 'W')
            wflag = true;
        if (s[i] == 'S')
            sflag = true;
        if (s[i] == 'E')
            eflag = true;
    }
    if (nflag == sflag && wflag == eflag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
