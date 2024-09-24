#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main()
{
    string S;
    cin >> S;
    bool flag = true;
    sort(S.begin(), S.end());
    rep(S.length()) if (S[i] == S[i + 1]) flag = false;
    if (flag)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}
