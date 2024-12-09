#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vl = vector<ll>;
using vvl = vector<vl>;
#define inf 1ll << 60
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    ll D; // 日数
    cin >> D;
    ll c[26]; // 各種類の不満度低下係数
    rep(i, 26) cin >> c[i];

    ll s[D][26]; // 各日の種類ごとの満足度
    rep(i, D) {
        rep(j, 26) {
            cin >> s[i][j];
        }
    }

    vl last(26, 0); // 各種類が最後に開催された日 (初期値は0)
    vl result; // 解答としての選択を記録
    ll total_score = 0; // 合計スコア

    // 日ごとに最適な選択肢を決定
    for (ll day = 1; day <= D; day++) {
        ll best_score = -inf; // 最適スコア (初期値は非常に小さい値)
        ll best_choice = 0; // 最適な選択肢の種類

        // 26種類の中から最適な選択肢を探す
        rep(type, 26) {
            // スコアを計算する
            ll current_score = s[day - 1][type]; // この日の満足度
            vl temp_last = last; // 一時的に使用するlast
            temp_last[type] = day; // この種類を選択した場合の状態を仮定

            // 不満度の計算
            rep(i, 26) {
                current_score -= c[i] * (day - temp_last[i]);
            }

            // 現時点での最良の選択肢を更新
            if (current_score > best_score) {
                best_score = current_score;
                best_choice = type;
            }
        }

        // 最適な選択肢を確定
        result.push_back(best_choice + 1); // 1-indexedで記録
        total_score += best_score; // 合計スコアを更新
        last[best_choice] = day; // 最適な選択肢の最後の開催日を更新
    }

    // 結果を出力
    for (ll choice : result) {
        cout << choice << endl;
    }

    return 0;
}
