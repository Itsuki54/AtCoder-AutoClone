#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define inf 1ll << 60
#define rep(n) for (ll i = 0; i < (ll)(n); i++)
#define repj(n) for (ll j = 0; j < (ll)(n); j++)
#define rep1(I, n) for (ll i = (I); i < (ll)(n); i++)

int main()
{
    ll a, b, sum = 1;
    cin >> a >> b;
    for (ll i = a; i <= b; i++)
    {
        if (i < 0)
            sum *= (-1);
          else if(i==0){
            cout <<"Zero"<<endl;
            return 0;
          }
    }
    if (sum < 0)
        cout << "Negative" << endl;
    else
        cout << "Positive" << endl;
}
