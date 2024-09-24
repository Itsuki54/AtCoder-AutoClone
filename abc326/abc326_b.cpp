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
    int N;
    cin >> N;
    for (int i = N; i < 1000; i++) {
        int h = i / 100;
        int t = (i - h*100) / 10;
        if (h * t == i % 10) {
            cout << i << endl;
            return 0;
        }
    }
}
