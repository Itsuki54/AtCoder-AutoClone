#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll<<60;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main() {
    ll N, A, B,sum=0;
    cin >> N >> A >> B;
    ll AB = A+B;
    if(N%AB>A)cout << (N/AB+1)*A<<endl;
    else cout << (N/AB)*A+N%AB<<endl;
}
