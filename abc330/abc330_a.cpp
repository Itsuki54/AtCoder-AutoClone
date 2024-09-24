#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main() {
int N,L,sum=0;
cin >> N>>L;
int A[N];
rep(N){
    cin >> A[i];
    if(A[i]>=L)sum++;
}
cout << sum<<endl;
}
