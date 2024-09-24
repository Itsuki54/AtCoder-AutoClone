#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll<<60;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main() {
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll dx = x2-x1;
    ll dy = y2-y1;
    ll x3 = x2-dy;
    ll y3 = y2+dx;
    cout << x3<<" "<< y3<<" "<<x3-dx<<" "<<y3-dy<<" "<<endl;
}
