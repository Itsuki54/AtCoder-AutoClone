#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main() {
    int a[3];
    rep(3)cin >> a[i];
    sort(a, a + 3);
    if (a[0] == 5 && a[1] == 5 && a[2] == 7)cout << "YES" << endl;
    else cout << "NO" << endl;
}
