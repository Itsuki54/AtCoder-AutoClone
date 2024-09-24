#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll<<60;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main() {
    ll N;
    cin >> N;
    rep(10) {
        if (N / pow(2, (9 - i)) >= 1) {
            cout << "1";
            N = N - pow(2, (9 - i));
        } else cout << "0";
    }
}
