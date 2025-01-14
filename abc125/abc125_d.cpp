#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    bool has_zero = false;
    vector<int> numbers = vector<int>(n);
    int negative_count = 0;

    for (int i=0;i<n;i++){
        cin >> numbers[i];
        if(numbers[i] == 0){
            has_zero = true;
        }else if(numbers[i] < 0){
            negative_count++;
        }
    }

    int mini = abs(numbers[0]);
    for (int i=0;i<n;i++){
        if (abs(numbers[i]) < mini){
            mini = abs(numbers[i]);
        }
    }

    long long ans = 0;
    for (int i=0;i<n;i++){
        ans += abs(numbers[i]);
    }
    if ((not has_zero) and (negative_count % 2 == 1)){
        ans -= 2 * mini;
    }
    cout << ans;
}
