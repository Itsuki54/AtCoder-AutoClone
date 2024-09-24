#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll<<60;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main() {
    ll N;
    cin >> N;
    ll A[N];
    rep(N)cin >> A[i];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if ((A[i] + A[j] + A[k]) == 1000) {
                    if ((i != j) && (j != k)&&(i!=k)) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
}
