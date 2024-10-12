#include <bits/stdc++.h>
#define rep1(a) for (int i = 0; i < a; i++)
#define rep2(i, a) for (int i = 0; i < a; i++)
#define rep3(i, a, b) for (int i = a; i < b; i++)
#define rep4(i, a, b, c) for (int i = a; i < b; i += c)
#define overload4(a, b, c, d, e, ...) e
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
using namespace std;

int main()
{
    int N;
    cin >> N;
    int d[N];
    rep1(N) cin >> d[i];
    sort(d, d + N);
    if (d[N / 2] == d[N / 2 - 1])
        cout << '0' << endl;
    else
        cout << d[N / 2] - d[N / 2 - 1] << endl;
}