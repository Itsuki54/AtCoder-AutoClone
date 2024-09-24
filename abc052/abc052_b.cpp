#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60;
#define rep(n) for (int i = 0; i < (int)(n); i++)
#define repj(n) for (int j = 0; j < (int)(n); j++)

int main()
{
    string S;
    ll N;
    cin >> N >> S;
ll A[N+1];
A[0]=0;for (ll i = 1; i <= N+1; i++)
    {
        if (S[i - 1] == 'I')
            A[i] = A[i - 1] + 1;
        else
            A[i] = A[i - 1] - 1;
    }
        //rep(N+1) cout << A[i] << " ";

    sort(A, A + N+1);
    cout << A[N] << " ";
}
