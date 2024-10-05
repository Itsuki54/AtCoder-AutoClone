#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vl = vector<ll>;
using vvl = vector<vl>;
using ld = long double;
typedef pair<ll, ll> pll;
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

struct Segment
{
    int x1, y1, x2, y2;
};

double distance(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double solve(int N, int S, int T, vector<Segment> &segments)
{
    vector<int> order(N);
    for (int i = 0; i < N; i++)
        order[i] = i;

    double min_time = 1e9;
    do
    {
        for (int mask = 0; mask < (1 << N); mask++)
        {
            double time = 0.0;
            int cur_x = 0, cur_y = 0;
            for (int i = 0; i < N; i++)
            {
                int idx = order[i];
                Segment &seg = segments[idx];

                int start_x = (mask & (1 << i)) ? seg.x2 : seg.x1;
                int start_y = (mask & (1 << i)) ? seg.y2 : seg.y1;
                int end_x = (mask & (1 << i)) ? seg.x1 : seg.x2;
                int end_y = (mask & (1 << i)) ? seg.y1 : seg.y2;

                time += distance(cur_x, cur_y, start_x, start_y) / S;

                time += distance(start_x, start_y, end_x, end_y) / T;

                cur_x = end_x;
                cur_y = end_y;
            }

            min_time = min(min_time, time);
        }
    } while (next_permutation(order.begin(), order.end()));

    return min_time;
}

int main()
{
    int N, S, T;
    cin >> N >> S >> T;

    vector<Segment> segments(N);

    for (int i = 0; i < N; i++)
    {
        cin >> segments[i].x1 >> segments[i].y1 >> segments[i].x2 >> segments[i].y2;
    }

    double result = solve(N, S, T, segments);

    printf("%.10f\n", result);

    return 0;
}
