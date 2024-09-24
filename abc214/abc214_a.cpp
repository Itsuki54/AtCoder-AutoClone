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
    int n;
    cin >> n;
    if (n <= 125)cout << 4 << endl;
    else if (n <= 211)cout << 6 << endl;
    else if (n <= 214)cout << 8 << endl;
}
