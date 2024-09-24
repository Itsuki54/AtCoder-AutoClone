#include <iostream>
using namespace std;

typedef long long ll;  // ll がどこで定義されているかわからないため typedef を追加

#define rep(i, n) for (int i = 0; i < (n); ++i)  // rep の定義を追加

int main() {
    ll N, Q;
    cin >> N;
    ll P[N];  // 配列のサイズに変数を使用するため、可変長配列はC++ではサポートされていない
    rep(i, N) {
        cin >> P[i];
    }
    cin >> Q;
    ll A[Q], B[Q];
    rep(i, Q) {
        cin >> A[i] >> B[i];
    }
    ll Aans, Bans; 
    rep(i, Q) {
        Aans = Bans = -1; 
        rep(j, N) {
            if (P[j] == A[i]) {
                Aans = j;
            }
            if (P[j] == B[i]) {
                Bans = j;
            }
        }
        if (Aans < Bans) {
            cout << A[i] << endl;
        } else {
            cout << B[i] << endl;
        }
    }
    return 0;
}
