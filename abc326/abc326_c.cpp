#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define rep(n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, m;
    cin >> N >> m;
    int a[N], ans = 1, count = 1,j=1;
    rep(N) cin >> a[i];
    sort(a, a + N);
    for (int i = 0; i < N - 1; i++) {
        while ((j < N)&&(a[j] < a[i] + m)) {
            count++;
            j++;
        }
        ans = max(ans, count);
        count--;
    }
    cout << ans << endl;
}
