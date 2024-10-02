#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vl = vector<ll>;
using vvl = vector<vl>;
#define inf 1ll << 60
#define rep(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define sz(x) (ll)(x).size()
#define print(x) cout << x << endl
const vector<int> dx = {-1, 0, 1, 0};
const vector<int> dy = {0, 1, 0, -1};
template <typename T>
void chmin(T &a, T b)
{
    a = min(a, b);
}

template <typename T>
void chmax(T &a, T b)
{
    a = max(a, b);
}

ll POW(ll x, ll n)
{
    ll res = 1;
    while (n > 0)
    {
        if (n & 1)
            res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}

int main()
{
    ll N;
    cin >> N;
    ll C[N], P[N];
    rep(i,N)cin >> C[i] >> P[i];
    ll A[N+1], B[N+1];
    A[0]=0;
    B[0]=0;
    for(ll i =1;i<N+1;i++){
        A[i] = 0;
        B[i] = 0;
        if (C[i-1] == 1)
        {
            A[i] += P[i-1];
        }
        else
            B[i] += P[i-1];
        if(i>0){
            A[i] += A[i - 1];
            B[i] += B[i - 1];
        }
         }
    ll Q;
    cin >> Q;
    rep(i,Q){
        ll L, R;
        cin >> L >> R;
        cout << A[R] - A[L-1] << " " << B[R] - B[L-1] << endl;
    }
}
