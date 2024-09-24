#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll<<60;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main() {
    ll N;
   cin >> N;
   ll sum =0;
   for(int i=0;i<=8;i++){
       sum+=N%2*pow(2,i);
       N/=10;
   }
   cout << sum << endl;
}
