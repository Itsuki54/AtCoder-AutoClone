#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll<<60;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main() {
    ll N,sum=0,cnt=1;
    cin >> N;
    while(0<N){
      sum +=cnt;
      N/=2;
      cnt *=2;
    }
    cout << sum << endl;
}
