#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string ab = "AB";
    int c = 0;
    int la = 0;
    int sb = 0;
    int lasb = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int l = s.size();
        for (int j = 0; j + 1 < s.size(); ++j) {
            if  (s.at(j) == 'A' && s.at(j + 1) == 'B') {
                c++;
            }
        }
        if (s.at(0) == 'B') {
            sb++;
        }
        if (s.at(s.size() - 1) == 'A') {
            la++;
        }
        if (s.at(0) == 'B' && s.at(s.size() - 1) == 'A') {
            lasb++;
        }
    }
    if (lasb == la && lasb == sb) {
        c = c + max(0, lasb - 1);
    } else {
        c += min(sb, la);
    }
    cout << c << endl;
}