#include <bits/stdc++.h>

using namespace std;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define rep3(i, s, n, j, o, m)           \
    for (int i = (s); i < (int)(n); i++) \
        for (int j = (o); j < (int)(m); j++)
#define rep4(n, m)                     \
    for (int i = 0; i < (int)(n); i++) \
        for (int j = 0; j < (int)(m); j++)

int main() {
    /*int a[100], sum = 1300000;
    for (int i = 0; i < 100; i++) {
        cin >> a[i];
        sum -= a[i];
        cout << "残り:" << sum << endl;
    }*/
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 1; i <= b / c; i++) {
        if ((c * i >= a) && (c * i <= b)) {
            cout << c * i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
