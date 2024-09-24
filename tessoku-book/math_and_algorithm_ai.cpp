#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main()
{
    ll N, Q;
    cin >> N >> Q;
    ll A[N+1], L[Q+1],R[Q+1], sum[N+1];
    for(int i = 1;i<=N;i++)cin >> A[i];
    for(int i = 1;i<=Q;i++)cin >> L[i]>>R[i];
    sum[0]=0;
    for(int i = 1;i<=N;i++){
      sum[i]=sum[i-1]+A[i];
    }
    for(int i = 1;i<=Q;i++){
      cout << sum[R[i]]-sum[L[i]-1]<<endl;
    }
    
}
