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
#define rep1j(I, n) for (ll j = (I); j < (ll)(n); j++)

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
    using namespace std;
    unsigned N;
    cin >> N;

    vector<unsigned> B(N, N); // B[i] := 人 i の直後の人（いなければ N）
    unsigned front;

    for (unsigned i = 0; i < N; ++i)
    {
        int A;
        cin >> A;
        --A; // 0-indexed に直しておく
        if (A < 0)
            front = i;
        else
            B[A] = i; // 人 i の直前が人 A ⇔ 人 A の直後が人 i
    }
    while (front < N)
    { // N になるまで（= 直後の人がいなくなるまで）直後に移動を繰り返す
        cout << front + 1 << " ";
        front = B[front];
    }
    cout << endl;

    return 0;
}
