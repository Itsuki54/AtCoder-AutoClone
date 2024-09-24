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
    int a, b;
    cin >> a >> b;
    if (b - a >= 3)cout << "No" << endl;
    else if (b - a <= -4)cout << "No" << endl;
    else cout << "Yes" << endl;

}
