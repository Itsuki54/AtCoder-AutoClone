#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll<<60;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main() {
    string S;
    cin >> S;
    int n = S.length(), ans=753;
    for (int i = 0; i < n - 2; i++) {
        int x = (S[i] - '0') * 100 + (S[i + 1] - '0') * 10 + S[i + 2] - '0';
        ans = min(abs(x-753),ans);
    }
    cout << ans << endl;
}
