#include <bits/stdc++.h>

using namespace std;
using ll = long long;
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

ll ReverseSort(vl &v)
{
    ll res = 0;
    rep(i, sz(v) - 1)
    {
        ll m = i;
        Rep(j, i + 1, sz(v))
        {
            if (v[j] < v[m])
                m = j;
        }
        if (m != i)
        {
            swap(v[i], v[m]);
            res++;
        }
    }
    return res;
}

#define SEG_LEN (1LL << 18)

int seg[SEG_LEN * 2];

void add(int ind, int v)
{
    ind += SEG_LEN;
    seg[ind] += v;
    while (true)
    {
        ind /= 2;
        if (ind == 0)
            break;
        seg[ind] = seg[ind * 2] + seg[ind * 2 + 1];
    }
}

int sum(int l, int r)
{
    int ans = 0;
    l += SEG_LEN;
    r += SEG_LEN;
    while (l < r)
    {
        if (l % 2 == 1)
        {
            ans += seg[l];
            l++;
        }
        l /= 2;
        if (r % 2 == 1)
        {
            ans += seg[r - 1];
            r--;
        }
        r /= 2;
    }
    return ans;
}

int main()
{
    ll N;
    cin >> N;
    double left = 0, right = 100, mid;
    for (ll i = 0; i < 20; i++)
    {
        mid = (left + right) / 2;
        double var = mid * mid * mid + mid;
        if (var > 1.0 * N)
            right = mid;
        else
            left = mid;
    }
    cout << mid << endl;
}
