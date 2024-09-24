#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    ll H, W, N;
    cin >> H >> W >> N;
    string T;
    cin >> T;
    string S[H];
    ll ans = 0;

    rep(i, H) {
        cin >> S[i];
    }

    rep(i, H) {
        rep(j, W) {
            bool flag = true;
                                ll x = i;
                    ll y = j;
            if (S[i][j] == '#') {
                flag = false;
            } else {
                rep(k, N) {
                    if (T[k] == 'L' && y - 1 >= 0 && S[x][y- 1] == '.') {
                        y--;
                        continue;
                    } else if (T[k] == 'R' && y + 1 < W && S[x][y + 1] == '.') {
                        y++;
                        continue;
                    } else if (T[k] == 'U' && x - 1 >= 0 && S[x - 1][y] == '.') {
                        x--;
                        continue;
                    } else if (T[k] == 'D' && x + 1 < H && S[x + 1][y] == '.') {
                        x++;
                        continue;
                    } else {
                        flag = false;
                        break;
                    }
                }
            }
            if (flag) {
                ans++;
            }
        }
    }

    cout << ans  << endl;

    return 0;
}
