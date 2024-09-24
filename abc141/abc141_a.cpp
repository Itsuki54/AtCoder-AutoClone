#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = double;
using vl = vector<ll>;
using vvl = vector<vl>;
using vld = vector<ld>;
using vvld = vector<vld>;
using pl = pair<ll, ll>;
using mll = map<ll, ll>;
#define inf 1ll << 60
#define rep(i, n) for (int i = 0; i < n; i++)
#define per(i, n) for (int i = n - 1; i >= 0; i--)
#define Rep(i, sta, n) for (int i = sta; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define per1(i, n) for (int i = n; i >= 1; i--)
#define Rep1(i, sta, n) for (int i = sta; i <= n; i++)
#define all(v) (v).begin(), (v).end()
#define rev(v) reverse(all(v))
#define RSORT(v) reverse(sort(all(v)))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define sz(x) (ll)(x).size()
#define endl "\n"
#define print(x) cout << x << endl
#define syosu(x) fixed << setprecision(x)
#define SEG_LEN (1LL << 18)
int seg[SEG_LEN*2];
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

ll _pow(ll x, ll n) {
    ll res = 1;
    while(n > 0) {
        if(n & 1) res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}

ll _max(ll a,ll b){
    if (a<b)return b;
    else return a;
}

ll _min(ll a,ll b){
    if (a<b)return a;
    else return b;
}


ll _gcd(ll x, ll y){
	if(x>y)swap(x,y);
	if(y%x==0)return x;
	return gcd(y%x,x);
}

int main() {
    string s;
    cin >> s;
    if(s=="Sunny")print("Cloudy");
    else if(s=="Cloudy")print("Rainy");
    else print("Sunny");
}
