#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define repk(n) for (ll k = 0; k < (ll)(n); k++)
#define repl(n) for (ll l = 0; l < (ll)(n); l++)
#define reph(n) for (ll h = 0; h < (ll)(n); h++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

bool compare(const tuple<string, ll, ll> &a, const tuple<string, ll, ll> &b)
{
    if (get<0>(a) != get<0>(b))
    {
        return get<0>(a) < get<0>(b);
    }
    else
    {
        return get<1>(a) > get<1>(b);
    }
}

int main()
{
    ll N;
    cin >> N;
    ll A = N / 1000, B = N / 100 % 10, C = N / 10 % 10, D = N % 10;
    rep(2)
    {
        repj(2)
        {
            repk(2)
            {
                ll ans = A;
                if (i == 0)
                {
                    ans += B;
                }
                else
                {
                    ans -= B;
                }
                if (j == 0)
                {
                    ans += C;
                }
                else
                {
                    ans -= C;
                }
                if (k == 0)
                {
                    ans += D;
                }
                else
                {
                    ans -= D;
                }
                if (ans == 7)
                {
                    cout << A;
                    if (i == 0)
                    {
                        cout << "+";
                    }
                    else
                    {
                        cout << "-";
                    }
                    cout << B;
                    if (j == 0)
                    {
                        cout << "+";
                    }
                    else
                    {
                        cout << "-";
                    }
                    cout << C;
                    if (k == 0)
                    {
                        cout << "+";
                    }
                    else
                    {
                        cout << "-";
                    }
                    cout << D << "=7" << endl;
                    return 0;
                }
            }
        }
    }
}