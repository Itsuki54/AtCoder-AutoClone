#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define REP(I, N, M) for ((ll)(I) = (ll)(N); (ll)(I) < (ll)(M); (ll)(I)++)

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
    if (N >= 1200)
    {
        cout << "ARC" << endl;
    }
    else
    {
        cout << "ABC" << endl;
    }
}
