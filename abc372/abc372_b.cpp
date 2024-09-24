#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vl = vector<ll>;

int main() {
    ll M;
    cin >> M;

    vl A;
    while (M > 0) {
        for (int i = 10; i >= 0; --i) {
            if (M >= pow(3, i)) {
                A.push_back(i);
                M -= pow(3, i);
                break;
            }
        }
    }

    int N = A.size();
    cout << N << endl;
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}