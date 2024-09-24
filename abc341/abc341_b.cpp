#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];
    ll S[N-1], T[N-1];
    rep (i, N-1) {
       cin >> S[i]>> T[i];
    }
    rep(i,N-1){
        if(A[i] >= S[i]){
            A[i+1]+=T[i]*(A[i]/S[i]);
        }
    }
    cout << A[N-1] << endl;
}
