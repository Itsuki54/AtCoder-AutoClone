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
    ll A[26];
    rep(s.size())
    {
        A[s[i] - 'a']++;
    }
    rep(26){
        if(A[i]%2==1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
