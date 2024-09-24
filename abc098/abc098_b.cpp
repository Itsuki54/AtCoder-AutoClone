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
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define sz(x) (ll)(x).size()
#define endl "\n"
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

int main()
{
    int N;
    string S;
    cin >> N >> S;
    set<char> A;
    set<char> B;
    int ans = 0;

    for (int i = 0; i < N - 1; i++)
    {

        for (int n = 0; n <= i; n++)
            A.insert(S[n]);
        for (int m = i + 1; m < N; m++)
            B.insert(S[m]);

        int cnt = 0;
        for (auto x : A)
        {
            bool flag = false;
            for (auto y : B)
            {
                if (y == x)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                cnt++;
        }
        ans = max(ans, cnt);
        A = {};
        B = {};
    }
    cout << ans;
    return 0;
}
