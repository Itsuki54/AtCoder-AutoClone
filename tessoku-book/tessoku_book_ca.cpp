#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll<<60;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main() {
    ll A, B;
    cin >> A>>B;
    for (int i = A; i <= B; i++) {
        if (!(100 % i)) {
            cout << "Yes" << endl;
            return 0;
        }

    }
    cout << "No" << endl;
}
