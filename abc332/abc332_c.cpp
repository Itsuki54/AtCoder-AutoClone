#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll N, M;
    string S;
    cin >> N >> M >> S;
    string sum[N];
    rep(N) { sum[i] = S[i]; }
    reverse(sum, sum + N);

    ll ans = 0, cnt = 0;
    rep(N)
    {
        if (sum[i] == "0")
        {
            ans = max(ans, cnt);
            cnt = 0;
        }
        else if (sum[i] == "2")
        {
            cnt++;
        }
    }
    ans = max(ans, cnt);
    // ansはロゴ入りの最低枚数

    ll Muni = 0, Mant = 0;
    rep(N)
    {
        if (sum[i] == "0")
        {
            Muni = max(Muni, Mant);
            Mant = 0;
        }
        else
            Mant++;
    }
    Muni = max(Muni, Mant);

    cout << max(ans, Muni - M) << endl;
}
