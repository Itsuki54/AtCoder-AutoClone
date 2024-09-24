#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"

int main()
{
    string S;
    cin >> S;
    string ans = "";
    ll cnt = 0;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '.')
        {
            ans = S.substr(cnt, i - cnt);
            cnt = i + 1;
        }
    }

    if (cnt < S.size())
    {
        ans = S.substr(cnt);
    }

    cout << ans << endl;

    return 0;
}
