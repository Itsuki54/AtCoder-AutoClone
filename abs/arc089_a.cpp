#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<ll> t(N), x(N), y(N);
    for (ll i = 0; i < N; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }
    
    ll prev_x = 0, prev_y = 0, prev_t = 0;
    
    for (ll i = 0; i < N; i++) {
        ll dist = abs(x[i] - prev_x) + abs(y[i] - prev_y);
        ll time_available = t[i] - prev_t;
        
        if (dist > time_available || (dist % 2 != time_available % 2)) {
            cout << "No" << endl;
            return 0;
        }
        
        prev_x = x[i];
        prev_y = y[i];
        prev_t = t[i];
    }
    
    cout << "Yes" << endl;
    return 0;
}
